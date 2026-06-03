//Take a weekday number and determine if it is a weekday or weekend

#include <iostream>
using namespace std;

class Solution {
public:
    string checkDay(int day) {

        if (day >= 1 && day <= 5)
            return "Weekday";
        else if (day == 6 || day == 7)
            return "Weekend";
        else
            return "Invalid Day";

    }
};

int main() {
    Solution obj;

    int day;
    cin >> day;

    cout << obj.checkDay(day);

    return 0;
}