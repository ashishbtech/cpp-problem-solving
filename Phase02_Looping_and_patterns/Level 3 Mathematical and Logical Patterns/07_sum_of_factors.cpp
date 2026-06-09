//Find the sum of all factors of a number

#include <iostream>
using namespace std;

class Solution {
public:
    int findFactorSum(int n) {

        int sum = 0;

        for (int i = 1; i <= n; i++) {

            if (n % i == 0)
                sum += i;

        }

        return sum;

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.findFactorSum(n);

    return 0;
}