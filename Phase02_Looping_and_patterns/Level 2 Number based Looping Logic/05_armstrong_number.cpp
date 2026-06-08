//Check if a number is an Armstrong number

#include <iostream>
using namespace std;

class Solution {
public:
    string checkArmstrong(int n) {

        int original = n;
        int sum = 0;

        while (n > 0) {

            int digit = n % 10;
            sum += digit * digit * digit;
            n /= 10;

        }

        if (sum == original)
            return "Armstrong Number";
        else
            return "Not an Armstrong Number";

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkArmstrong(n);

    return 0;
}