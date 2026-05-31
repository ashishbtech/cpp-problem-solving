//Take a 4-digit number and check if first and last digits are equal

#include <iostream>
using namespace std;

class Solution {
public:
    string checkDigits(int n) {

        int first = n / 1000;
        int last = n % 10;

        if (first == last)
            return "First and Last Digits are Equal";
        else
            return "First and Last Digits are Not Equal";
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkDigits(n);

    return 0;
}
