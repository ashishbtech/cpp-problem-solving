// Count the number of digits in a number recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    int countDigits(int n)
    {
        if (n == 0)
        {
            return 0;
        }

        return 1 + countDigits(n / 10);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    cout << obj.countDigits(n);

    return 0;
}