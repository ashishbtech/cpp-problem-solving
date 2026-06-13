// Find product of digits of a number recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    int productDigits(int n)
    {
        if (n == 0)
            return 1;

        return (n % 10) * productDigits(n / 10);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    cout << obj.productDigits(n);

    return 0;
}