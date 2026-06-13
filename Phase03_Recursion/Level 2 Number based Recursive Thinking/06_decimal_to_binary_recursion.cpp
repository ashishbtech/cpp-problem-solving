// Convert a decimal number to binary recursively

#include <iostream>
using namespace std;

class Solution
{

public:
    void printBinary(int n)
    {
        if (n == 0)
            return;

        printBinary(n / 2);

        cout << n % 2;
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    if (n == 0)
        cout << 0;
    else
        obj.printBinary(n);

    return 0;
}