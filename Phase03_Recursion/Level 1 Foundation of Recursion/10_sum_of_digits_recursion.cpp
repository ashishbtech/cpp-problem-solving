// Find sum of digits of a number recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    int sumOfDigits(int n)
    {
        if (n == 0)
        {
            return 0;
        }

        return (n % 10) + sumOfDigits(n / 10);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    cout << obj.sumOfDigits(n);

    return 0;
}