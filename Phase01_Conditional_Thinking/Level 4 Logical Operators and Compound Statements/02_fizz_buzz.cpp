//Print Fizz if divisible by 3, Buzz if divisible by 5, and FizzBuzz if divisible by both

#include <iostream>
using namespace std;

class Solution {
public:
    string checkFizzBuzz(int n) {

        if (n % 3 == 0 && n % 5 == 0)
            return "FizzBuzz";
        else if (n % 3 == 0)
            return "Fizz";
        else if (n % 5 == 0)
            return "Buzz";
        else
            return "Not Divisible";

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.checkFizzBuzz(n);

    return 0;
}