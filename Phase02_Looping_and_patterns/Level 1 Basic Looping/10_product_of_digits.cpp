//Print the product of digits of a given number

#include <iostream>
using namespace std;

class Solution {
public:
    int findProduct(int n) {

        int product = 1;

        while (n > 0) {

            int digit = n % 10;
            product *= digit;
            n /= 10;

        }

        return product;

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.findProduct(n);

    return 0;
}