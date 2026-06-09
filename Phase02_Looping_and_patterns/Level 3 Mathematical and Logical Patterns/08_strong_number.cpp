//Check if a number is a strong number

#include <iostream>
using namespace std;

class Solution {
public:
    string checkStrongNumber(int n) {

        int original = n;
        int sum = 0;

        while (n > 0) {

            int digit = n % 10;

            int factorial = 1;

            for (int i = 1; i <= digit; i++) {
                factorial *= i;
            }

            sum += factorial;

            n /= 10;

        }

        if (sum == original)
            return "Strong Number";
        else
            return "Not a Strong Number";

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkStrongNumber(n);

    return 0;
}