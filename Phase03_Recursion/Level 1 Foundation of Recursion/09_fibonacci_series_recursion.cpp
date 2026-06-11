// Print Fibonacci series up to n terms recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    void printFibonacci(int first, int second, int n)
    {
        if (n == 0)
        {
            return;
        }

        cout << first << " ";

        printFibonacci(second, first + second, n - 1);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    obj.printFibonacci(0, 1, n);

    return 0;
}