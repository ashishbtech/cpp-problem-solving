//Check whether a number is single-digit, double-digit, or multi-digit

#include <iostream>
using namespace std;

class Solution {
public:
    string checkDigits(int n) {

        if (n >= -9 && n <= 9)
            return "Single Digit";

        else if ((n >= 10 && n <= 99) || (n <= -10 && n >= -99))
            return "Double Digit";

        else
            return "Multi Digit";
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkDigits(n);

    return 0;
}