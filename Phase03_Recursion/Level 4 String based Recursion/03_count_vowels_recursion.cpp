//Count vowels in a string recursively

#include <iostream>
using namespace std;

class Solution {
public:
    int countVowels(string str, int index) {

        if (index == str.length())
            return 0;

        char ch = str[index];

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' ||
            ch == 'O' || ch == 'U')
            return 1 + countVowels(str, index + 1);

        return countVowels(str, index + 1);

    }
};

int main() {
    Solution obj;

    string str;
    cin >> str;

    cout << obj.countVowels(str, 0);

    return 0;
}