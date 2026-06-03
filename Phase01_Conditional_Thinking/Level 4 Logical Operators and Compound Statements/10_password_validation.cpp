//Check password validity based on length and presence of at least one digit

#include <iostream>
using namespace std;

class Solution {
public:
    string validatePassword(string password) {

        bool hasDigit = false;

        for (int i = 0; password[i] != '\0'; i++) {
            if (password[i] >= '0' && password[i] <= '9') {
                hasDigit = true;
                break;
            }
        }

        int length = 0;

        for (int i = 0; password[i] != '\0'; i++) {
            length++;
        }

        if (length >= 8 && hasDigit)
            return "Valid Password";
        else
            return "Invalid Password";

    }
};

int main() {
    Solution obj;

    string password;
    cin >> password;

    cout << obj.validatePassword(password);

    return 0;
}