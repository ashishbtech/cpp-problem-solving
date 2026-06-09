//Print first n terms of an arithmetic progression

#include <iostream>
using namespace std;

class Solution {
public:
    void printAP(int a, int d, int n) {

        for (int i = 0; i < n; i++) {

            int term = a + (i * d);
            cout << term << " ";

        }

    }
};

int main() {
    Solution obj;

    int a, d, n;
    cin >> a >> d >> n;

    obj.printAP(a, d, n);

    return 0;
}