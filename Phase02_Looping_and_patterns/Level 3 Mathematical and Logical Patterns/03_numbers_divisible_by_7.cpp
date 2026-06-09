//Print all numbers between a and b divisible by 7

#include <iostream>
using namespace std;

class Solution {
public:
    void printNumbers(int a, int b) {

        for (int i = a; i <= b; i++) {

            if (i % 7 == 0)
                cout << i << " ";

        }

    }
};

int main() {
    Solution obj;

    int a, b;
    cin >> a >> b;

    obj.printNumbers(a, b);

    return 0;
}