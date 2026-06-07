//Print the sum of all even numbers up to n

#include <iostream>
using namespace std;

class Solution {
public:
    int findEvenSum(int n) {

        int sum = 0;

        for (int i = 1; i <= n; i++) {

            if (i % 2 == 0)
                sum += i;

        }

        return sum;

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.findEvenSum(n);

    return 0;
}