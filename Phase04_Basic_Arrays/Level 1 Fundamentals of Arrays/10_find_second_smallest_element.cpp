// Find the second smallest element in an array

#include <iostream>
using namespace std;

class Solution
{
public:
    int findSecondSmallest(int arr[], int n)
    {

        int smallest = arr[0];
        int secondSmallest = arr[0];

        for (int i = 1; i < n; i++)
        {

            if (arr[i] < smallest)
            {
                secondSmallest = smallest;
                smallest = arr[i];
            }
            else if (arr[i] < secondSmallest && arr[i] != smallest)
            {
                secondSmallest = arr[i];
            }
        }

        return secondSmallest;
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

    cout << obj.findSecondSmallest(arr, n);

    return 0;
}