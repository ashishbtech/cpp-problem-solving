// Remove all occurrences of a character from a string recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    string removeCharacter(string str, int index, char ch)
    {

        if (index == str.length())
            return "";

        if (str[index] == ch)
            return removeCharacter(str, index + 1, ch);

        return str[index] + removeCharacter(str, index + 1, ch);
    }
};

int main()
{
    Solution obj;

    string str;
    char ch;

    cin >> str;
    cin >> ch;

    cout << obj.removeCharacter(str, 0, ch);

    return 0;
}