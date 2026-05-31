//Check if a number lies within the range [100, 999]

#include <iostream>
using namespace std;

class Solution {
public:
    string checkRange(int n) {

        if (n >= 100 && n <= 999)
            return "Number is Within Range";
        else
            return "Number is Outside Range";
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkRange(n);

    return 0;
}