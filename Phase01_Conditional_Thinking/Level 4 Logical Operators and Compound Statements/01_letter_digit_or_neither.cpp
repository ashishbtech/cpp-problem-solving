//Take a character and check if it is a letter, a digit, or neither

#include <iostream>
using namespace std;

class Solution {
public:
    string checkCharacter(char ch) {

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            return "Letter";
        else if (ch >= '0' && ch <= '9')
            return "Digit";
        else
            return "Neither";

    }
};

int main() {
    Solution obj;

    char ch;
    cin >> ch;

    cout << obj.checkCharacter(ch);

    return 0;
}