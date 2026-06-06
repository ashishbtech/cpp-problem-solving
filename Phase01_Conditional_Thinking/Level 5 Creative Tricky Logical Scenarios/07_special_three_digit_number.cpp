//Check if sum of first and last digit equals the middle digit

#include <iostream>
using namespace std;

class Solution {
public:
    string checkNumber(int num) {

        int first = num / 100;
        int middle = (num / 10) % 10;
        int last = num % 10;

        if (first + last == middle)
            return "Condition Satisfied";
        else
            return "Condition Not Satisfied";

    }
};

int main() {
    Solution obj;

    int num;
    cin >> num;

    cout << obj.checkNumber(num);

    return 0;
}