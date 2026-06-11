// Print only even numbers from 1 to n recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    void printEven(int n)
    {

        if (n == 0)
            return;

        printEven(n - 1);

        if (n % 2 == 0)
            cout << n << " ";
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    obj.printEven(n);

    return 0;
}