// Find the second smallest distinct element in an array

#include <iostream>
using namespace std;

class Solution
{
public:
    int secondSmallest(int arr[], int n)
    {
        int smallest = arr[0];
        int secondSmallest = 0;
        bool found = false;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] < smallest)
            {
                secondSmallest = smallest;
                smallest = arr[i];
                found = true;
            }
            else if (arr[i] > smallest)
            {
                if (!found || arr[i] < secondSmallest)
                {
                    secondSmallest = arr[i];
                    found = true;
                }
            }
        }

        if (found)
        {
            return secondSmallest;
        }

        return -1;
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

    if (n < 2)
    {
        cout << "Second smallest element does not exist";
    }
    else
    {
        int result = obj.secondSmallest(arr, n);

        if (result == -1)
        {
            cout << "Second smallest element does not exist";
        }
        else
        {
            cout << result;
        }
    }

    return 0;
}