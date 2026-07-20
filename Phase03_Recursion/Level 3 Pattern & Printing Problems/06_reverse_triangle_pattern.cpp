//Print reverse triangle pattern recursively

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

    void printPattern(int n) {

        if (n == 0)
            return;

        printStars(n);
        cout << endl;

        printPattern(n - 1);

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.printPattern(n);

    return 0;
}