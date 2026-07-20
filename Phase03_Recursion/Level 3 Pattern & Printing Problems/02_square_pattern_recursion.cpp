// Print a square pattern of stars recursively

#include <iostream>
using namespace std;

class Solution
{
public:
    void printStars(int col)
    {

        if (col == 0)
            return;

        cout << "* ";

        printStars(col - 1);
    }

    void printSquare(int row, int col)
    {

        if (row == 0)
            return;

        printStars(col);
        cout << endl;

        printSquare(row - 1, col);
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    obj.printSquare(n, n);

    return 0;
}