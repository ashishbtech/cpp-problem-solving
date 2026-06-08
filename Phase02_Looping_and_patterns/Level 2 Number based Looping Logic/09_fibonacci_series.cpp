//Print Fibonacci series up to n terms

#include <iostream>
using namespace std;

class Solution {
public:
    void printFibonacci(int n) {

        int first = 0;
        int second = 1;

        for (int i = 1; i <= n; i++) {

            cout << first << " ";

            int next = first + second;
            first = second;
            second = next;

        }

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.printFibonacci(n);

    return 0;
}