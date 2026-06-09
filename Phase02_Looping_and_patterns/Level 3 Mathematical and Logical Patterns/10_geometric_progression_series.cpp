//Print first n terms of a geometric progression

#include <iostream>
using namespace std;

class Solution {
public:
    void printGP(int a, int r, int n) {

        int term = a;

        for (int i = 1; i <= n; i++) {

            cout << term << " ";
            term = term * r;

        }

    }
};

int main() {
    Solution obj;

    int a, r, n;
    cin >> a >> r >> n;

    obj.printGP(a, r, n);

    return 0;
}