// Check if the array is sorted in descending order

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isSortedDescending(int arr[], int n)
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                return false;
            }
        }

        return true;
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

    if (obj.isSortedDescending(arr, n))
    {
        cout << "Array is sorted in descending order";
    }
    else
    {
        cout << "Array is not sorted in descending order";
    }

    return 0;
}