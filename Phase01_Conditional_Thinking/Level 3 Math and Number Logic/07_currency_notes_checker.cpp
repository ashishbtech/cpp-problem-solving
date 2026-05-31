//Check if amount can be evenly divided into 2000, 500, and 100 notes

#include <iostream>
using namespace std;

class Solution {
public:
    string checkAmount(int amount) {

        if (amount % 100 == 0)
            return "Amount Can be Divided";
        else
            return "Amount Cannot be Divided";
    }
};

int main() {
    Solution obj;

    int amount;
    cin >> amount;

    cout << obj.checkAmount(amount);

    return 0;
}