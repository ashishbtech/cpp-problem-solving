//Print all numbers whose sum of digits is even from 1 to 100

#include <iostream>
using namespace std;

class Solution {
public:
    void printNumbers() {

        for (int i = 1; i <= 100; i++) {

            int num = i;
            int sum = 0;

            while (num > 0) {

                int digit = num % 10;
                sum += digit;
                num /= 10;

            }

            if (sum % 2 == 0)
                cout << i << " ";

        }

    }
};

int main() {
    Solution obj;

    obj.printNumbers();

    return 0;
}