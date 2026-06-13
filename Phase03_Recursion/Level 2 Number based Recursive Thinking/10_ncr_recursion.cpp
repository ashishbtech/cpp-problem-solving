// Find nCr using Pascal's relation recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    int findNCR(int n, int r)
    {

        if (r == 0 || r == n)
            return 1;

        return findNCR(n - 1, r - 1) + findNCR(n - 1, r);
    }
};

int main()
{
    Solution obj;

    int n, r;
    cin >> n >> r;

    cout << obj.findNCR(n, r);

    return 0;
}