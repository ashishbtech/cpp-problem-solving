//Print all prime numbers between 1 and 100

#include <iostream>
using namespace std;

class Solution {
public:
    void printPrimeNumbers() {

        for (int i = 2; i <= 100; i++) {

            bool isPrime = true;

            for (int j = 2; j < i; j++) {

                if (i % j == 0) {
                    isPrime = false;
                    break;
                }

            }

            if (isPrime)
                cout << i << " ";

        }

    }
};

int main() {
    Solution obj;

    obj.printPrimeNumbers();

    return 0;
}