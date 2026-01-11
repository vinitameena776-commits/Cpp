#include <bits/stdc++.h>
using namespace std;

// Handles subarray related operations
class SubarraySolver {
public:
    // Returns length of longest subarray with sum = k

    //Brute approach 
    int longestSubarrayWithSumK(const vector<int>& arr, int k) {
        int maxLen = 0;

        // Fix starting index
        for (int i = 0; i < arr.size(); i++) {
            int sum = 0;

            // Fix ending index
            for (int j = i; j < arr.size(); j++) {
                sum += arr[j];

                // Check if current subarray sum matches k
                if (sum == k) {
                    maxLen = max(maxLen, j - i + 1);
                }
            }
        }
        return maxLen;
    }

    
// BETTER APPROACH: Works for positive & negative numbers
// Time: O(n), Space: O(n)

int LongestSubarrayWithSumK(const vector<int>& arr, int k) {
    map<long long, int> preSumMap;   // stores first index of each prefix sum
    long long sum = 0;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];   // current prefix sum

        // If prefix sum itself equals k
        if (sum == k) {
            maxLen = max(maxLen, i + 1);
        }

        // Check if (sum - k) was seen before
        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end()) {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }

        // Store prefix sum only if not already present
        if (preSumMap.find(sum) == preSumMap.end()) {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}
// OPTIMAL APPROACH using Sliding Window
// Works ONLY when all array elements are positive
// Time Complexity: O(n)
// Space Complexity: O(1)

int Longest_SubarrayWithSumK(const vector<int>& arr, int k) {
    int left = 0, right = 0;
    long long sum = arr[0];
    int maxLen = 0;

    while (right < arr.size()) {

        // Shrink the window if sum exceeds k
        while (left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }

        // Check if current window sum equals k
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        // Expand the window
        right++;
        if (right < arr.size()) {
            sum += arr[right];
        }
    }
    return maxLen;
}

};

int main() {
    vector<int> arr = { -1, 1, 1 };
    SubarraySolver solver;
    int ans = solver.longestSubarrayWithSumK(arr, 1);
    cout << "The length of the longest subarray is: " << ans << endl;

    vector<int> arr2 = { -1, 1, 1 };
    SubarraySolver solve;
    int ans2 = solve.LongestSubarrayWithSumK(arr2, 1);
    cout << "The length of the longest subarray is: " << ans2 << endl;

    vector<int> arr3 = { 1, 1, 1 };
    SubarraySolver solved;
    int ans3= solved.Longest_SubarrayWithSumK(arr3, 3);
    cout << "The length of the longest subarray is: " << ans3 << endl;

    return 0;
}
