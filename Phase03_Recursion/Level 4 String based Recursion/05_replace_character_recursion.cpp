// Replace all occurrences of a character in a string recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    string replaceCharacter(string str, int index, char oldChar, char newChar)
    {

        if (index == str.length())
            return "";

        if (str[index] == oldChar)
            str[index] = newChar;

        return str[index] + replaceCharacter(str, index + 1, oldChar, newChar);
    }
};

int main()
{
    Solution obj;

    string str;
    char oldChar, newChar;

    cin >> str;
    cin >> oldChar >> newChar;

    cout << obj.replaceCharacter(str, 0, oldChar, newChar);

    return 0;
}