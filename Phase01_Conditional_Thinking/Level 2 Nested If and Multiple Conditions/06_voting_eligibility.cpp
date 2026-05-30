//Check voting eligibility for a given age

#include <iostream>
using namespace std;

class Solution {
public:
    string checkEligibility(int age) {

        if (age >= 18)
            return "Eligible to Vote";
        else
            return "Not Eligible to Vote";
    }
};

int main() {
    Solution obj;

    int age;
    cin >> age;

    cout << obj.checkEligibility(age);

    return 0;
}