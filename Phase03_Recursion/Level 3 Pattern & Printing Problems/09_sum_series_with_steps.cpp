//Print sum of series recursively and display each step

#include <iostream>
using namespace std;

class Solution {
public:
    int findSum(int n) {

        if (n == 1) {
            cout << "1";
            return 1;
        }

        int sum = findSum(n - 1);

        cout << " + " << n;

        return sum + n;

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    int result = obj.findSum(n);

    cout << " = " << result;

    return 0;
}