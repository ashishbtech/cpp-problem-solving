//Take three numbers and check if they are in Geometric Progression

#include <iostream>
using namespace std;

class Solution {
public:
    string checkGP(int a, int b, int c) {

        if (a != 0 && b != 0 && (b * b == a * c))
            return "Geometric Progression";
        else
            return "Not a Geometric Progression";

    }
};

int main() {
    Solution obj;

    int a, b, c;
    cin >> a >> b >> c;

    cout << obj.checkGP(a, b, c);

    return 0;
}