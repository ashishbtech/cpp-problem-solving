// Find the minimum element in an array

#include <iostream>
using namespace std;

class Solution
{
public:
    int findMinimum(int arr[], int n)
    {

        int minimum = arr[0];

        for (int i = 1; i < n; i++)
        {

            if (arr[i] < minimum)
                minimum = arr[i];
        }

        return minimum;
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << obj.findMinimum(arr, n);

    return 0;
}