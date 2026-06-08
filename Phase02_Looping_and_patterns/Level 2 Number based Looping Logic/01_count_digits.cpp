//Count the number of digits in a given number

#include <iostream>
using namespace std;

class Solution {
public:
    int countDigits(int n) {

        int count = 0;

        while (n > 0) {
            count++;
            n /= 10;
        }

        return count;

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.countDigits(n);

    return 0;
}