// Reverse the elements of an array

#include <iostream>
using namespace std;

class Solution
{
public:
    void reverseArray(int arr[], int n)
    {

        int start = 0;
        int end = n - 1;

        while (start < end)
        {

            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            start++;
            end--;
        }
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

    obj.reverseArray(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}