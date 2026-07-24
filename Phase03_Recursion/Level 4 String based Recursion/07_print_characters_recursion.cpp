// Print all characters of a string one by one recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    void printCharacters(string str, int index)
    {

        if (index == str.length())
            return;

        cout << str[index] << endl;

        printCharacters(str, index + 1);
    }
};

int main()
{
    Solution obj;

    string str;
    cin >> str;

    obj.printCharacters(str, 0);

    return 0;
}