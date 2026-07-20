// Print numbers in increasing and decreasing order in same function

#include <iostream>
using namespace std;

class Solution
{
public:
    void printNumbers(int n)
    {

        if (n == 0)
            return;

        cout << n << " ";

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