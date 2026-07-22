//Remove all spaces from a string recursively

#include <iostream>
using namespace std;

class Solution {
public:
    string removeSpaces(string str, int index) {

        if (index == str.length())
            return "";

        if (str[index] == ' ')
            return removeSpaces(str, index + 1);

        return str[index] + removeSpaces(str, index + 1);

    }
};

int main() {
    Solution obj;

    string str;
    getline(cin, str);

    cout << obj.removeSpaces(str, 0);

    return 0;
}