// Find the second largest distinct element in an array

#include <iostream>
using namespace std;

class Solution
{
public:
    int secondLargest(int arr[], int n)
    {
        int largest = arr[0];
        int secondLargest = 0;
        bool found = false;

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > largest)
            {
                secondLargest = largest;
                largest = arr[i];
                found = true;
            }
            else if (arr[i] < largest)
            {
                if (!found || arr[i] > secondLargest)
                {
                    secondLargest = arr[i];
                    found = true;
                }
            }
        }

        if (found)
        {
            return secondLargest;
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
        cout << "Second largest element does not exist";
    }
    else
    {
        int result = obj.secondLargest(arr, n);

        if (result == -1)
        {
            cout << "Second largest element does not exist";
        }
        else
        {
            cout << result;
        }
    }

    return 0;
}