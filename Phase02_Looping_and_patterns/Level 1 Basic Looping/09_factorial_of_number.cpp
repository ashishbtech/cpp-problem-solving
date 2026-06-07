//Print the factorial of a given number

#include <iostream>
using namespace std;

class Solution {
public:
    int findFactorial(int n) {

        int factorial = 1;

        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        return factorial;

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.findFactorial(n);

    return 0;
}