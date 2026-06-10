//Print a pattern where each row i prints i stars

#include <iostream>
using namespace std;

class Solution {
public:
    void printPattern(int n) {

        for (int i = 1; i <= n; i++) {

            for (int j = 1; j <= i; j++) {
                cout << "* ";
            }

            cout << endl;

        }

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.printPattern(n);

    return 0;
}