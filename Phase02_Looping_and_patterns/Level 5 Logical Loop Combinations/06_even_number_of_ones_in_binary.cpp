//Print numbers from 1 to n whose binary representation has even number of 1s

#include <iostream>
using namespace std;

class Solution {
public:
    void printNumbers(int n) {

        for (int i = 1; i <= n; i++) {

            int num = i;
            int count = 0;

            while (num > 0) {

                if (num % 2 == 1)
                    count++;

                num /= 2;

            }

            if (count % 2 == 0)
                cout << i << " ";

        }

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.printNumbers(n);

    return 0;
}