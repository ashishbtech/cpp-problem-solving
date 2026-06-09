//Find LCM of two numbers using loops

#include <iostream>
using namespace std;

class Solution {
public:
    int findLCM(int a, int b) {

        int maxNumber;

        if (a > b)
            maxNumber = a;
        else
            maxNumber = b;

        while (true) {

            if (maxNumber % a == 0 && maxNumber % b == 0)
                return maxNumber;

            maxNumber++;

        }

    }
};

int main() {
    Solution obj;

    int a, b;
    cin >> a >> b;

    cout << obj.findLCM(a, b);

    return 0;
}