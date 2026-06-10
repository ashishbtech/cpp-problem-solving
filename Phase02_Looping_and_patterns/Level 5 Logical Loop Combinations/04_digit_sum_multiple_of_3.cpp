//Print numbers between 1 and 100 whose digit sum is a multiple of 3

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

            if (sum % 3 == 0)
                cout << i << " ";

        }

    }
};

int main() {
    Solution obj;

    obj.printNumbers();

    return 0;
}