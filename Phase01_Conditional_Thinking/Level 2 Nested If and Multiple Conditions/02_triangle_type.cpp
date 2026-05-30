//Determine whether a triangle is equilateral, isosceles, or scalene

#include <iostream>
using namespace std;

class Solution {
public:
    string triangleType(int a, int b, int c) {

        if ((a + b <= c) || (a + c <= b) || (b + c <= a))
            return "Invalid Triangle";

        if (a == b && b == c)
            return "Equilateral Triangle";
        else if (a == b || b == c || a == c)
            return "Isosceles Triangle";
        else
            return "Scalene Triangle";
    }
};

int main() {
    Solution obj;

    int a, b, c;
    cin >> a >> b >> c;

    cout << obj.triangleType(a, b, c);

    return 0;
}