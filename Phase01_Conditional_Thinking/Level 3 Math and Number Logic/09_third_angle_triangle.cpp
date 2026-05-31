//Take two angles of a triangle and compute the third angle

#include <iostream>
using namespace std;

class Solution {
public:
    int thirdAngle(int a, int b) {

        return 180 - (a + b);
    }
};

int main() {
    Solution obj;

    int a, b;
    cin >> a >> b;

    cout << obj.thirdAngle(a, b);

    return 0;
}