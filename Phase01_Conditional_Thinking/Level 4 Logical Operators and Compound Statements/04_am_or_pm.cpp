//Take 24-hour time and determine whether it is AM or PM

#include <iostream>
using namespace std;

class Solution {
public:
    string checkTime(int hour, int minute) {

        if (hour >= 0 && hour < 12)
            return "AM";
        else
            return "PM";

    }
};

int main() {
    Solution obj;

    int hour, minute;
    cin >> hour >> minute;

    cout << obj.checkTime(hour, minute);

    return 0;
}