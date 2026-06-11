// Print only odd numbers from 1 to n recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    void printOdd(int n)
    {
        if (n == 0)
            return;

        printOdd(n - 1);

        if (n % 2 != 0)
            cout << n << " ";
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    obj.printOdd(n);

    return 0;
}