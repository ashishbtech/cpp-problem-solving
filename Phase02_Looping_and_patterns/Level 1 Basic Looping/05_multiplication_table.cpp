//Print the multiplication table of a given number

#include <iostream>
using namespace std;

class Solution {
public:
    void printTable(int n) {

        for (int i = 1; i <= 10; i++) {
            cout << n << " x " << i << " = " << n * i << endl;
        }

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.printTable(n);

    return 0;
}