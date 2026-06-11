// Calculate power of a number using recursion

#include <iostream>
using namespace std;

class Solution
{
public:
    int findPower(int base, int exponent)
    {

        if (exponent == 0)
        {
            return 1;
        }

        return base * findPower(base, exponent - 1);
    }
};

int main()
{
    Solution obj;

    int base, exponent;
    cin >> base >> exponent;

    cout << obj.findPower(base, exponent);

    return 0;
}