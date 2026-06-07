//Print numbers from 1 to 10

#include <iostream>
using namespace std;

class Solution {
public:
    void printNumbers() {

        for (int i = 1; i <= 10; i++) {
            cout << i << " ";
        }

    }
};

int main() {
    Solution obj;

    obj.printNumbers();

    return 0;
}