// Print multiplication table of a number recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    void printTable(int n, int i)
    {

        if (i > 10)
            return;

        cout << n << " x " << i << " = " << n * i << endl;

        printTable(n, i + 1);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    obj.printTable(n, 1);

    return 0;
}