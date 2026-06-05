//Take time and print the smaller angle between hour and minute hands

#include <iostream>
using namespace std;

class Solution {
public:
    double findAngle(int hour, int minute) {

        double hourAngle = (hour % 12) * 30 + minute * 0.5;
        double minuteAngle = minute * 6;

        double angle = hourAngle - minuteAngle;

        if (angle < 0)
            angle = -angle;

        if (angle > 180)
            angle = 360 - angle;

        return angle;

    }
};

int main() {
    Solution obj;

    int hour, minute;
    cin >> hour >> minute;

    cout << obj.findAngle(hour, minute);

    return 0;
}