// Find the difference between the largest and smallest elements

#include <iostream>
using namespace std;

class Solution
{
public:
    int findDifference(int arr[], int n)
    {
        int largest = arr[0];
        int smallest = arr[0];

        for (int i = 1; i < n; i++)
        {
            if (arr[i] > largest)
            {
                largest = arr[i];
            }

            if (arr[i] < smallest)
            {
                smallest = arr[i];
            }
        }

        return largest - smallest;
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

    cout << obj.findDifference(arr, n);

    return 0;
}