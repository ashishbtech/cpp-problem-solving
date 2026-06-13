// Calculate the sum of first n odd numbers recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    int findOddSum(int n)
    {

        if (n == 0)
            return 0;

        return (2 * n - 1) + findOddSum(n - 1);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    cout << obj.findOddSum(n);

    return 0;
}