// Print the string in reverse order recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    void printReverse(string str, int index)
    {

        if (index == str.length())
            return;

        printReverse(str, index + 1);

        cout << str[index];
    }
};

int main()
{
    Solution obj;

    string str;
    cin >> str;

    obj.printReverse(str, 0);

    return 0;
}