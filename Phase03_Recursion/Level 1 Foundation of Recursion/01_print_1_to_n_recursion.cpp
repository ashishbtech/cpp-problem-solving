// Print numbers from 1 to n using recursion

#include <iostream>
using namespace std;

class Solution
{
public:
    void printNumbers(int n)
    {

        if (n == 0)
            return;

        printNumbers(n - 1);

        cout << n << " ";
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    obj.printNumbers(n);

    return 0;
}