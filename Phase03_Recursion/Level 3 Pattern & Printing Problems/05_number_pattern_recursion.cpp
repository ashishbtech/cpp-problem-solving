//Print pattern of numbers recursively

#include <iostream>
using namespace std;

class Solution {
public:
    void printNumbers(int n) {

        if (n == 0)
            return;

        printNumbers(n - 1);

        cout << n << " ";

    }

    void printPattern(int row, int current) {

        if (current > row)
            return;

        printNumbers(current);
        cout << endl;

        printPattern(row, current + 1);

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.printPattern(n, 1);

    return 0;
}