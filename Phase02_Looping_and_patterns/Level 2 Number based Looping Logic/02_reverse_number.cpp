//Print the reverse of a given number

#include <iostream>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {

        int reverse = 0;

        while (n > 0) {

            int digit = n % 10;
            reverse = reverse * 10 + digit;
            n /= 10;

        }

        return reverse;

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.reverseNumber(n);

    return 0;
}