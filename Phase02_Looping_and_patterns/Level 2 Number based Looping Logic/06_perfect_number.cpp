//Check if a number is a perfect number

#include <iostream>
using namespace std;

class Solution {
public:
    string checkPerfect(int n) {

        int sum = 0;

        for (int i = 1; i < n; i++) {

            if (n % i == 0)
                sum += i;

        }

        if (sum == n)
            return "Perfect Number";
        else
            return "Not a Perfect Number";

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkPerfect(n);

    return 0;
}