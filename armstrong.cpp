#include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    // Count digits using logarithm
  int digits = (n == 0) ? 1 : (int)log10(n) + 1;

    int sum = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isArmstrong(n))
        cout << n << " is an Armstrong number." << endl;
    else
        cout << n << " is NOT an Armstrong number." << endl;

    return 0;
}

