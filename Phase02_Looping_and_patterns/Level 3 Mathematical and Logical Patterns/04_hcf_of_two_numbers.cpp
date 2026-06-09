//Find HCF (GCD) of two numbers using loops

#include <iostream>
using namespace std;

class Solution {
public:
    int findHCF(int a, int b) {

        int hcf = 1;

        for (int i = 1; i <= a && i <= b; i++) {

            if (a % i == 0 && b % i == 0)
                hcf = i;

        }

        return hcf;

    }
};

int main() {
    Solution obj;

    int a, b;
    cin >> a >> b;

    cout << obj.findHCF(a, b);

    return 0;
}