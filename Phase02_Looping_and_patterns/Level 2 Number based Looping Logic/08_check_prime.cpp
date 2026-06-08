//Check if a number is prime or not

#include <iostream>
using namespace std;

class Solution {
public:
    string checkPrime(int n) {

        if (n <= 1)
            return "Not a Prime Number";

        for (int i = 2; i < n; i++) {

            if (n % i == 0)
                return "Not a Prime Number";

        }

        return "Prime Number";

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkPrime(n);

    return 0;
}