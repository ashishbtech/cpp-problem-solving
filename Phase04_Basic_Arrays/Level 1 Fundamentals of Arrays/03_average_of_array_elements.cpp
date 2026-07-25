//Find the average of array elements

#include <iostream>
using namespace std;

class Solution {
public:
    double findAverage(int arr[], int n) {

        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        return (double)sum / n;

    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << obj.findAverage(arr, n);

    return 0;
}