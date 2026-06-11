// Print sum of first n natural numbers recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    int printSum(int n)
    {
        if (n == 1)
            return 1;

        return n + printSum(n - 1);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    cout << obj.printSum(n);

    return 0;
}