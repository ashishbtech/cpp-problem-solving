//Check whether middle digit is largest, smallest, or neither

#include <iostream>
using namespace std;

class Solution {
public:
    string checkMiddleDigit(int n) {

        int first = n / 100;
        int middle = (n / 10) % 10;
        int last = n % 10;

        if (middle > first && middle > last)
            return "Middle Digit is Largest";

        else if (middle < first && middle < last)
            return "Middle Digit is Smallest";

        else
            return "Middle Digit is Neither";
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkMiddleDigit(n);

    return 0;
}