//Print all factors of a given number

#include <iostream>
using namespace std;

class Solution {
public:
    void printFactors(int n) {

        for (int i = 1; i <= n; i++) {

            if (n % i == 0)
                cout << i << " ";

        }

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.printFactors(n);

    return 0;
}