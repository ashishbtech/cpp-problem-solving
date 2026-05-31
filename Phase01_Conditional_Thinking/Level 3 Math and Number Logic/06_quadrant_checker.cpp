//Take coordinates (x, y) and determine the quadrant

#include <iostream>
using namespace std;

class Solution {
public:
    string checkQuadrant(int x, int y) {

        if (x > 0 && y > 0)
            return "First Quadrant";

        else if (x < 0 && y > 0)
            return "Second Quadrant";

        else if (x < 0 && y < 0)
            return "Third Quadrant";

        else if (x > 0 && y < 0)
            return "Fourth Quadrant";

        else
            return "Point Lies on Axis";
    }
};

int main() {
    Solution obj;

    int x, y;
    cin >> x >> y;

    cout << obj.checkQuadrant(x, y);

    return 0;
}