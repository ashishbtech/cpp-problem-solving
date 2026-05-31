//Check if a number is a multiple of 7 or ends with 7

#include <iostream>
using namespace std;

class Solution {
public:
    string checkNumber(int n) {

        if (n % 7 == 0 || n % 10 == 7)
            return "Condition Satisfied";
        else
            return "Condition Not Satisfied";
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkNumber(n);

    return 0;
}
