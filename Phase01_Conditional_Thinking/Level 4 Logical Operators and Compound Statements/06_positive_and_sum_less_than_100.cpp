//Check if both numbers are positive and their sum is less than 100

#include <iostream>
using namespace std;

class Solution {
public:
    string checkCondition(int a, int b) {

        if (a > 0 && b > 0 && (a + b) < 100)
            return "Condition Satisfied";
        else
            return "Condition Not Satisfied";

    }
};

int main() {
    Solution obj;

    int a, b;
    cin >> a >> b;

    cout << obj.checkCondition(a, b);

    return 0;
}