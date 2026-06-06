//Take a year and print the corresponding century

#include <iostream>
using namespace std;

class Solution {
public:
    string findCentury(int year) {

        int century;

        if (year % 100 == 0)
            century = year / 100;
        else
            century = (year / 100) + 1;

        return to_string(century) + "th Century";

    }
};

int main() {
    Solution obj;

    int year;
    cin >> year;

    cout << obj.findCentury(year);

    return 0;
}