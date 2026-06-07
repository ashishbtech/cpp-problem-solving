//Print all odd numbers between 1 and 100

#include <iostream>
using namespace std;

class Solution {
public:
    void printOddNumbers() {

        for (int i = 1; i <= 100; i++) {

            if (i % 2 != 0)
                cout << i << " ";

        }

    }
};

int main() {
    Solution obj;

    obj.printOddNumbers();

    return 0;
}