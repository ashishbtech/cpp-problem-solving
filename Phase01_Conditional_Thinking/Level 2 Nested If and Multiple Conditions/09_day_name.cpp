//Take a day number and print the corresponding day name

#include <iostream>
using namespace std;

class Solution {
public:
    string getDayName(int day) {

        if (day == 1)
            return "Monday";
        else if (day == 2)
            return "Tuesday";
        else if (day == 3)
            return "Wednesday";
        else if (day == 4)
            return "Thursday";
        else if (day == 5)
            return "Friday";
        else if (day == 6)
            return "Saturday";
        else if (day == 7)
            return "Sunday";
        else
            return "Invalid Day";
    }
};

int main() {
    Solution obj;

    int day;
    cin >> day;

    cout << obj.getDayName(day);

    return 0;
}