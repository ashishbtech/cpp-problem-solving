//Print factorial of each number from 1 to n

#include <iostream>
using namespace std;

class Solution {
public:
    void printFactorials(int n) {

        for (int i = 1; i <= n; i++) {

            int factorial = 1;

            for (int j = 1; j <= i; j++) {
                factorial *= j;
            }

            cout << "Factorial of " << i << " = " << factorial << endl;

        }

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.printFactorials(n);

    return 0;
}