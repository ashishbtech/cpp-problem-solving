//Print the sum of first n natural numbers

#include <iostream>
using namespace std;

class Solution {
public:
    int findSum(int n) {

        int sum = 0;

        for (int i = 1; i <= n; i++) {
            sum += i;
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