// Print digits of a number in words recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    void printWords(int n)
    {

        if (n == 0)
            return;

        printWords(n / 10);

        int digit = n % 10;

        if (digit == 0)
            cout << "zero ";
        else if (digit == 1)
            cout << "one ";
        else if (digit == 2)
            cout << "two ";
        else if (digit == 3)
            cout << "three ";
        else if (digit == 4)
            cout << "four ";
        else if (digit == 5)
            cout << "five ";
        else if (digit == 6)
            cout << "six ";
        else if (digit == 7)
            cout << "seven ";
        else if (digit == 8)
            cout << "eight ";
        else if (digit == 9)
            cout << "nine ";
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    if (n == 0)
        cout << "zero";
    else
        obj.printWords(n);

    return 0;
}