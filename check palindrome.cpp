#include <bits/stdc++.h>
using namespace std;
 
bool ispalindrome(int n) {
    if (n < 0) return false; // negatives are not palindromes

    long long ans = 0;
    int original = n;

    while (n != 0) {
        int digit = n % 10;
        ans = ans * 10 + digit;
        n /= 10;
    }

    return (original == ans);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    if (ispalindrome(n)) {
        cout << "The given number is a palindrome." << endl;
    } else {
        cout << "The given number is NOT a palindrome." << endl;
    }

    return 0;
}
