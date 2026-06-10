//Print the sum of even digits and odd digits separately

#include <iostream>
using namespace std;

class Solution {
public:
    void findSums(int n) {

        int evenSum = 0;
        int oddSum = 0;

        while (n > 0) {

            int digit = n % 10;

            if (digit % 2 == 0)
                evenSum += digit;
            else
                oddSum += digit;

            n /= 10;

        }

        cout << "Even Digit Sum = " << evenSum << endl;
        cout << "Odd Digit Sum = " << oddSum;

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.findSums(n);

    return 0;
}