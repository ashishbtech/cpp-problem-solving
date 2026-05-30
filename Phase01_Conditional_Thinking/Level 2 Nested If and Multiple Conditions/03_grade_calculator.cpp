//Take marks (0–100) and print the corresponding grade

#include <iostream>
using namespace std;

class Solution {
public:
    string checkGrade(int marks) {

        if (marks >= 90)
            return "A";
        else if (marks >= 75)
            return "B";
        else if (marks >= 60)
            return "C";
        else if (marks >= 40)
            return "D";
        else
            return "F";
    }
};

int main() {
    Solution obj;

    int marks;
    cin >> marks;

    cout << obj.checkGrade(marks);

    return 0;
}