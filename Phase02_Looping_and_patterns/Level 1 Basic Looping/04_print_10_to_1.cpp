//Print numbers from 10 down to 1

#include <iostream>
using namespace std;

class Solution {
public:
    void printReverseNumbers() {

        for (int i = 10; i >= 1; i--) {
            cout << i << " ";
        }

    }
};

int main() {
    Solution obj;

    obj.printReverseNumbers();

    return 0;
}