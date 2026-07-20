// Print a triangle pattern recursively in bottom-up order

#include <iostream>
using namespace std;

class Solution
{
public:
    void printStars(int n)
    {

        if (n == 0)
            return;

        cout << "* ";

        printStars(n - 1);
    }

    void printTriangle(int n, int current)
    {

        if (current > n)
            return;

        printStars(current);
        cout << endl;

        printTriangle(n, current + 1);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    obj.printTriangle(n, 1);

    return 0;
}