//Check if a number is a palindrome

#include <iostream>
using namespace std;

class Solution {
public:
    string checkPalindrome(int n) {

        int original = n;
        int reverse = 0;

        while (n > 0) {

            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n /= 10;

        }

        if (original == reverse)
            return "Palindrome Number";
        else
            return "Not a Palindrome Number";

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkPalindrome(n);

    return 0;
}