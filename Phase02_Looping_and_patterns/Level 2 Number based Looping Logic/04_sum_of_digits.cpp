//Find the sum of digits of a number

#include <iostream>
using namespace std;

class Solution {
public:
    int findSum(int n) {

        int sum = 0;

        while (n > 0) {

            int digit = n % 10;
            sum += digit;
            n /= 10;

        }

        return sum;

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.findSum(n);

    return 0;
}