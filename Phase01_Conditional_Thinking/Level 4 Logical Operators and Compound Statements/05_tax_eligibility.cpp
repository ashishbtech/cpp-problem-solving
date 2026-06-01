//Check tax eligibility based on age and income

#include <iostream>
using namespace std;

class Solution {
public:
    string checkTaxEligibility(int age, int income) {

        if (age > 18 && income > 500000)
            return "Eligible for Tax";
        else
            return "Not Eligible for Tax";

    }
};

int main() {
    Solution obj;

    int age, income;
    cin >> age >> income;

    cout << obj.checkTaxEligibility(age, income);

    return 0;
}