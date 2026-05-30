//Take a month number and print number of days

#include <iostream>
using namespace std;

class Solution {
public:
    int getDays(int month) {

        if (month == 1 || month == 3 || month == 5 || month == 7 ||
            month == 8 || month == 10 || month == 12)
            return 31;

        else if (month == 4 || month == 6 || month == 9 || month == 11)
            return 30;

        else if (month == 2)
            return 28;

        else
            return -1;
    }
};

int main() {
    Solution obj;

    int month;
    cin >> month;

    int result = obj.getDays(month);

    if (result == -1)
        cout << "Invalid Month";
    else
        cout << result;

    return 0;
}