//Print the squares of numbers from 1 to n

#include <iostream>
using namespace std;

class Solution {
public:
    void printSquares(int n) {

        for (int i = 1; i <= n; i++) {
            cout << i * i << " ";
        }

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.printSquares(n);

    return 0;
}