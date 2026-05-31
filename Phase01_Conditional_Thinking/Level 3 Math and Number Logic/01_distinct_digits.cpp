//Take a 3-digit number and check if all digits are distinct

#include <iostream>
using namespace std;

class Solution {
public:
    string checkDistinct(int n) {

        int a = n / 100;
        int b = (n / 10) % 10;
        int c = n % 10;

        if (a != b && b != c && a != c)
            return "All Digits are Distinct";
        else
            return "Digits are Not Distinct";
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkDistinct(n);

    return 0;
}