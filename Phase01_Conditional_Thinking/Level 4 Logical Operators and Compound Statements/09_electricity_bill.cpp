//Calculate electricity bill using slabs

#include <iostream>
using namespace std;

class Solution {
public:
    double calculateBill(int units) {

        if (units <= 100)
            return units * 1.5;
        else if (units <= 200)
            return (100 * 1.5) + ((units - 100) * 2.5);
        else
            return (100 * 1.5) + (100 * 2.5) + ((units - 200) * 4);

    }
};

int main() {
    Solution obj;

    int units;
    cin >> units;

    cout << obj.calculateBill(units);

    return 0;
}