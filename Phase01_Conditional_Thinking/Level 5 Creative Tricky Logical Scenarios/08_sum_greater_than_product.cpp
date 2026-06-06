//Check if sum of digits is greater than product of digits

#include <iostream>
using namespace std;

class Solution {
public:
    string checkDigits(int num) {

        int sum = 0;
        int product = 1;

        while (num > 0) {
            int digit = num % 10;
            sum += digit;
            product *= digit;
            num /= 10;
        }

        if (sum > product)
            return "Sum is Greater";
        else
            return "Product is Greater or Equal";

    }
};

int main() {
    Solution obj;

    int num;
    cin >> num;

    cout << obj.checkDigits(num);

    return 0;
}