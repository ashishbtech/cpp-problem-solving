// Swap the first and last elements of an array

#include <iostream>
using namespace std;

class Solution
{
public:
    void swapFirstLast(int arr[], int n)
    {

        int temp = arr[0];
        arr[0] = arr[n - 1];
        arr[n - 1] = temp;
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

    obj.swapFirstLast(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}