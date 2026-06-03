//Take a single digit and print its word form

#include <iostream>
using namespace std;

class Solution {
public:
    string digitToWord(int digit) {

        if (digit == 0)
            return "Zero";
        else if (digit == 1)
            return "One";
        else if (digit == 2)
            return "Two";
        else if (digit == 3)
            return "Three";
        else if (digit == 4)
            return "Four";
        else if (digit == 5)
            return "Five";
        else if (digit == 6)
            return "Six";
        else if (digit == 7)
            return "Seven";
        else if (digit == 8)
            return "Eight";
        else if (digit == 9)
            return "Nine";
        else
            return "Invalid Digit";

    }
};

int main() {
    Solution obj;

    int digit;
    cin >> digit;

    cout << obj.digitToWord(digit);

    return 0;
}