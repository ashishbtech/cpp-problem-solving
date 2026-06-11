// Find nth Fibonacci number recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    int fibonacci(int n)
    {
        if (n == 0)
        {
            return 0;
        }

        if (n == 1)
        {
            return 1;
        }

        return fibonacci(n - 1) + fibonacci(n - 2);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    cout << obj.fibonacci(n);

    return 0;
}