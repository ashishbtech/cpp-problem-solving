// Find the maximum element in an array

#include <iostream>
using namespace std;

class Solution
{
public:
    int findMaximum(int arr[], int n)
    {

        int maximum = arr[0];

        for (int i = 1; i < n; i++)
        {

            if (arr[i] > maximum)
                maximum = arr[i];
        }

        return maximum;
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

    cout << obj.findMaximum(arr, n);

    return 0;
}