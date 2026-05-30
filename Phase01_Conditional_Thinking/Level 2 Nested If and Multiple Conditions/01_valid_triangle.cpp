//Take three sides and check if they form a valid triangle

#include <iostream>
using namespace std;

class Solution {
public:
    string checkTriangle(int a, int b, int c) {
        if ((a + b > c) && (a + c > b) && (b + c > a))
            return "Valid Triangle";
        else
            return "Invalid Triangle";
    }
};

int main() {
    Solution obj;

    int a, b, c;
    cin >> a >> b >> c;

    cout << obj.checkTriangle(a, b, c);

    return 0;
}