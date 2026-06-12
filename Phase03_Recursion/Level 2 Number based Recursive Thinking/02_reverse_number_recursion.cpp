// Reverse a number recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse = 0;

    int reverseNumber(int n)
    {
        if (n == 0)
            return reverse;

        int digit = n % 10;
        reverse = reverse * 10 + digit;

        return reverseNumber(n / 10);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    cout << obj.reverseNumber(n);

    return 0;
}