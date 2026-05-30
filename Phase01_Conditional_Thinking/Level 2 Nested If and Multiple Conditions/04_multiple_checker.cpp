//Check if one number is a multiple of the other

#include <iostream>
using namespace std;

class Solution {
public:
    string checkMultiple(int a, int b) {

        if (a % b == 0 || b % a == 0)
            return "Multiple";
        else
            return "Not Multiple";
    }
};

int main() {
    Solution obj;

    int a, b;
    cin >> a >> b;

    cout << obj.checkMultiple(a, b);

    return 0;
}