//Find the smallest and largest digit in a given number

#include <iostream>
using namespace std;

class Solution {
public:
    void findDigits(int n) {

        int smallest = 9;
        int largest = 0;

        while (n > 0) {

            int digit = n % 10;

            if (digit < smallest)
                smallest = digit;

            if (digit > largest)
                largest = digit;

            n /= 10;

        }

        cout << "Smallest Digit = " << smallest << endl;
        cout << "Largest Digit = " << largest;

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.findDigits(n);

    return 0;
}