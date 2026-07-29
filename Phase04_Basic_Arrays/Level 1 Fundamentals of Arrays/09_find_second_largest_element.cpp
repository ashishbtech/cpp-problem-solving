// Find the second largest element in an array

#include <iostream>
using namespace std;

class Solution
{
public:
    int findSecondLargest(int arr[], int n)
    {

        int largest = arr[0];
        int secondLargest = arr[0];

        for (int i = 1; i < n; i++)
        {

            if (arr[i] > largest)
            {
                secondLargest = largest;
                largest = arr[i];
            }
            else if (arr[i] > secondLargest && arr[i] != largest)
            {
                secondLargest = arr[i];
            }
        }

        return secondLargest;
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

    cout << obj.findSecondLargest(arr, n);

    return 0;
}