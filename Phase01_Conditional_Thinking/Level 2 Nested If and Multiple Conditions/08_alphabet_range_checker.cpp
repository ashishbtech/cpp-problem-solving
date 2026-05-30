//Check whether alphabet lies between a-m or n-z

#include <iostream>
using namespace std;

class Solution {
public:
    string checkAlphabet(char ch) {

        if (ch >= 'a' && ch <= 'm')
            return "Between a and m";
        else if (ch >= 'n' && ch <= 'z')
            return "Between n and z";
        else
            return "Invalid Input";
    }
};

int main() {
    Solution obj;

    char ch;
    cin >> ch;

    cout << obj.checkAlphabet(ch);

    return 0;
}