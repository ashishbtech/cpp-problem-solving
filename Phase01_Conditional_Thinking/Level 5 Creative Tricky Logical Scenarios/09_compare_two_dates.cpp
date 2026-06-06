//Take two dates and determine which one comes first in the calendar

#include <iostream>
using namespace std;

class Solution {
public:
    string compareDates(int day1, int month1, int day2, int month2) {

        if (month1 < month2)
            return "First Date Comes Earlier";
        else if (month1 > month2)
            return "Second Date Comes Earlier";
        else {
            if (day1 < day2)
                return "First Date Comes Earlier";
            else if (day1 > day2)
                return "Second Date Comes Earlier";
            else
                return "Both Dates Are Same";
        }

    }
};

int main() {
    Solution obj;

    int day1, month1, day2, month2;
    cin >> day1 >> month1 >> day2 >> month2;

    cout << obj.compareDates(day1, month1, day2, month2);

    return 0;
}