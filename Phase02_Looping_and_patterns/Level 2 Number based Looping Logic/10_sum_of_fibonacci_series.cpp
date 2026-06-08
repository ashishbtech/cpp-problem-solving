//Print sum of first n terms of Fibonacci series

#include <iostream>
using namespace std;

class Solution {
public:
    int findFibonacciSum(int n) {

        int first = 0;
        int second = 1;
        int sum = 0;

        for (int i = 1; i <= n; i++) {

            sum += first;

            int next = first + second;
            first = second;
            second = next;

        }

        return sum;

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.findFibonacciSum(n);

    return 0;
}