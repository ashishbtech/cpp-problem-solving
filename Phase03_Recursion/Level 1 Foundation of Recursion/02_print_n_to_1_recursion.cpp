// Print numbers from n down to 1 using recursion

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