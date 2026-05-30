//Take the hour of the day and print greeting

#include <iostream>
using namespace std;

class Solution {
public:
    string checkGreeting(int hour) {

        if (hour >= 5 && hour < 12)
            return "Good Morning";
        else if (hour >= 12 && hour < 17)
            return "Good Afternoon";
        else if (hour >= 17 && hour < 21)
            return "Good Evening";
        else
            return "Good Night";
    }
};

int main() {
    Solution obj;

    int hour;
    cin >> hour;

    cout << obj.checkGreeting(hour);

    return 0;
}