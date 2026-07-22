// Reverse a string using recursion

#include <iostream>
using namespace std;

class Solution
{
public:
    string reverseString(string str, int index)
    {

        if (index < 0)
            return "";

        return str[index] + reverseString(str, index - 1);
    }
};

int main()
{
    Solution obj;

    string str;
    cin >> str;

    cout << obj.reverseString(str, str.length() - 1);

    return 0;
}