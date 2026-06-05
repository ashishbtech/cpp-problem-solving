//Take day and month and check if it forms a valid calendar date

#include <iostream>
using namespace std;

class Solution {
public:
    string checkDate(int day, int month) {

        if (month < 1 || month > 12)
            return "Invalid Date";

        if (month == 2) {
            if (day >= 1 && day <= 28)
                return "Valid Date";
            else
                return "Invalid Date";
        }

        if (month == 4 || month == 6 || month == 9 || month == 11) {
            if (day >= 1 && day <= 30)
                return "Valid Date";
            else
                return "Invalid Date";
        }

        if (day >= 1 && day <= 31)
            return "Valid Date";
        else
            return "Invalid Date";

    }
};

int main() {
    Solution obj;

    int day, month;
    cin >> day >> month;

    cout << obj.checkDate(day, month);

    return 0;
}