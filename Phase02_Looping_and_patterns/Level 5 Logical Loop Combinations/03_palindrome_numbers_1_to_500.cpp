//Print all palindrome numbers between 1 and 500

#include <iostream>
using namespace std;

class Solution {
public:
    void printPalindromeNumbers() {

        for (int i = 1; i <= 500; i++) {

            int original = i;
            int num = i;
            int reverse = 0;

            while (num > 0) {

                int digit = num % 10;
                reverse = reverse * 10 + digit;
                num /= 10;

            }

            if (original == reverse)
                cout << original << " ";

        }

    }
};

int main() {
    Solution obj;

    obj.printPalindromeNumbers();

    return 0;
}