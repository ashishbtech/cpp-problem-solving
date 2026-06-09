//Print the cubes of numbers from 1 to n

#include <iostream>
using namespace std;

class Solution {
public:
    void printCubes(int n) {

        for (int i = 1; i <= n; i++) {
            cout << i * i * i << " ";
        }

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    obj.printCubes(n);

    return 0;
}