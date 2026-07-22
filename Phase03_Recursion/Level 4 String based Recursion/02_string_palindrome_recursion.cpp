// Check if a string is a palindrome using recursion

#include <iostream>
using namespace std;

class Solution
{
public:
    bool checkPalindrome(string str, int left, int right)
    {

        if (left >= right)
            return true;

        if (str[left] != str[right])
            return false;

        return checkPalindrome(str, left + 1, right - 1);
    }
};

int main()
{
    Solution obj;

    string str;
    cin >> str;

    if (obj.checkPalindrome(str, 0, str.length() - 1))
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}