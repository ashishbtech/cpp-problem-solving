// Calculate the sum of first n even numbers recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    int findEvenSum(int n)
    {
        if (n == 0)
            return 0;

        return (2 * n) + findEvenSum(n - 1);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    cout << obj.findEvenSum(n);

    return 0;
}