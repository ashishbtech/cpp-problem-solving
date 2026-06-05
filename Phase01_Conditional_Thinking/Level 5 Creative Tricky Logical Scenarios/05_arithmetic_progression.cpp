//Take three numbers and check if they are in Arithmetic Progression

#include <iostream>
using namespace std;

class Solution {
public:
    string checkAP(int a, int b, int c) {

        if ((b - a) == (c - b))
            return "Arithmetic Progression";
        else
            return "Not an Arithmetic Progression";

    }
};

int main() {
    Solution obj;

    int a, b, c;
    cin >> a >> b >> c;

    cout << obj.checkAP(a, b, c);

    return 0;
}