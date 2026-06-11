// Print factorial of a number recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    long long printFactorial(int n)
    {
        if (n == 0 || n == 1)
        {
            return 1;
        }

        return n * printFactorial(n - 1);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    cout << obj.printFactorial(n);

    return 0;
}