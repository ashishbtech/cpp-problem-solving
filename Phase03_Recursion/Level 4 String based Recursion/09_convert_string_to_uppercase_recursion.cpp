// Convert a string to uppercase recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    string convertToUppercase(string str, int index)
    {

        if (index == str.length())
            return "";

        if (str[index] >= 'a' && str[index] <= 'z')
            str[index] = str[index] - 32;

        return str[index] + convertToUppercase(str, index + 1);
    }
};

int main()
{
    Solution obj;

    string str;
    cin >> str;

    cout << obj.convertToUppercase(str, 0);

    return 0;
}