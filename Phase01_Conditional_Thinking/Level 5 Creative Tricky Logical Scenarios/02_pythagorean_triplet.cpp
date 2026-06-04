//Take three numbers and check if they form a Pythagorean triplet

#include <iostream>
using namespace std;

class Solution {
public:
    string checkTriplet(int a, int b, int c) {

        if ((a * a + b * b == c * c) ||
            (a * a + c * c == b * b) ||
            (b * b + c * c == a * a))
            return "Pythagorean Triplet";
        else
            return "Not a Pythagorean Triplet";

    }
};

int main() {
    Solution obj;

    int a, b, c;
    cin >> a >> b >> c;

    cout << obj.checkTriplet(a, b, c);

    return 0;
}