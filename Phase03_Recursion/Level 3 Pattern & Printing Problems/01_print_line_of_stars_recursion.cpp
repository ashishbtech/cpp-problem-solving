//Print a line of n stars recursively

#include <iostream>
using namespace std;

class Solution {
public:
    void printStars(int n) {

        if (n == 0)
            return;

        cout << "* ";

        printStars(n - 1);

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.printStars(n);

    return 0;
}