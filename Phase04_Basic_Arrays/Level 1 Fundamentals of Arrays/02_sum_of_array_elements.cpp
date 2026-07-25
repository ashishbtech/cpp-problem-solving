//Find the sum of all elements in an array

#include <iostream>
using namespace std;

class Solution {
public:
    int findSum(int arr[], int n) {

        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        return sum;

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

    cout << obj.findSum(arr, n);

    return 0;
}