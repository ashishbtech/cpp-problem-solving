//Count numbers between 1 and 500 divisible by 7 but not by 5

#include <iostream>
using namespace std;

class Solution {
public:
    int countNumbers() {

        int count = 0;

        for (int i = 1; i <= 500; i++) {

            if (i % 7 == 0 && i % 5 != 0)
                count++;

        }

        return count;

    }
};

int main() {
    Solution obj;

    cout << obj.countNumbers();

    return 0;
}