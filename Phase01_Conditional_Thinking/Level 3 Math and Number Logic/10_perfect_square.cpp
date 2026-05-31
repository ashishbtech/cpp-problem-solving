//Check whether a number is a perfect square

#include <iostream>
using namespace std;

class Solution {
public:
    string checkPerfectSquare(int n) {

        for (int i = 0; i * i <= n; i++) {

            if (i * i == n)
                return "Perfect Square";
        }

        return "Not a Perfect Square";
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkPerfectSquare(n);

    return 0;
}