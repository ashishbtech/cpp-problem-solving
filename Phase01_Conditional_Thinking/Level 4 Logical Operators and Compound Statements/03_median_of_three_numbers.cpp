//Take three numbers and print the median value

#include <iostream>
using namespace std;

class Solution {
public:
    int findMedian(int a, int b, int c) {

        if ((a >= b && a <= c) || (a <= b && a >= c))
            return a;
        else if ((b >= a && b <= c) || (b <= a && b >= c))
            return b;
        else
            return c;

    }
};

int main() {
    Solution obj;

    int a, b, c;
    cin >> a >> b >> c;

    cout << obj.findMedian(a, b, c);

    return 0;
}