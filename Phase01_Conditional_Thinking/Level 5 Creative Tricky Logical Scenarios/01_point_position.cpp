//Take coordinates (x, y) and check whether the point lies on X-axis, Y-axis, or Origin

#include <iostream>
using namespace std;

class Solution {
public:
    string checkPointPosition(int x, int y) {

        if (x == 0 && y == 0)
            return "Origin";
        else if (y == 0)
            return "X-axis";
        else if (x == 0)
            return "Y-axis";
        else
            return "Neither Axis";

    }
};

int main() {
    Solution obj;

    int x, y;
    cin >> x >> y;

    cout << obj.checkPointPosition(x, y);

    return 0;
}