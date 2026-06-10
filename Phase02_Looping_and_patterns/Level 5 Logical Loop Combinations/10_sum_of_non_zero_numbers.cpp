//Take 5 numbers and print the sum of all non-zero numbers

#include <iostream>
using namespace std;

class Solution {
public:
    int findSum() {

        int sum = 0;

        for (int i = 1; i <= 5; i++) {

            int num;
            cin >> num;

            if (num == 0)
                continue;

            sum += num;

        }

        return sum;

    }
};

int main() {
    Solution obj;

    cout << obj.findSum();

    return 0;
}