// Create a new array containing elements of the original array in reverse order

#include <iostream>
using namespace std;

class Solution
{
public:
    void copyReverse(int arr[], int newArr[], int n)
    {

        for (int i = 0; i < n; i++)
        {
            newArr[i] = arr[n - 1 - i];
        }
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    int arr[100];
    int newArr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    obj.copyReverse(arr, newArr, n);

    for (int i = 0; i < n; i++)
    {
        cout << newArr[i] << " ";
    }

    return 0;
}