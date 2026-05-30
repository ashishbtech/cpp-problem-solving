//Check whether both numbers are even, both odd, or mixed

#include <iostream>
using namespace std;

class Solution {
public:
    string checkNumbers(int a, int b) {

        if (a % 2 == 0 && b % 2 == 0)
            return "Both Even";
        else if (a % 2 != 0 && b % 2 != 0)
            return "Both Odd";
        else
            return "One Even and One Odd";
    }
};

int main() {
    Solution obj;

    int a, b;
    cin >> a >> b;

    cout << obj.checkNumbers(a, b);

    return 0;
}