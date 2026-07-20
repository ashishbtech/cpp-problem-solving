// Print a triangle pattern recursively in top-down order

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

    void printTriangle(int n)
    {

        if (n == 0)
            return;

        printStars(n);
        cout << endl;

        printTriangle(n - 1);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    obj.printTriangle(n);

    return 0;
}