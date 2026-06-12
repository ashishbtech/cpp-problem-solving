// Check if a number is a palindrome using recursion

#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse = 0;

    int reverseNumber(int n)
    {
        if (n == 0)
            return reverse;

        int digit = n % 10;

        reverse = reverse * 10 + digit;

        return reverseNumber(n / 10);
    }

    string checkPalindrome(int n)
    {

        int original = n;
        int reversed = reverseNumber(n);

        if (original == reversed)
        {
            return "Palindrome Number";
        }
        else
        {
            return "Not a Palindrome Number";
        }
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkPalindrome(n);

    return 0;
}