// Print pattern of characters recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    void printCharacters(char ch)
    {

        if (ch < 'A')
            return;

        printCharacters(ch - 1);

        cout << ch;
    }

    void printPattern(char ch)
    {

        if (ch > 'Z')
            return;

        printCharacters(ch);
        cout << endl;

        printPattern(ch + 1);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    char lastCharacter = 'A' + n - 1;

    obj.printPattern(lastCharacter);

    return 0;
}