// Count how many elements are greater than the average of the array

#include <iostream>
using namespace std;

class Solution
{
public:
    int countGreaterThanAverage(int arr[], int n)
    {

        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        double average = (double)sum / n;
        int count = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] > average)
                count++;
        }

        return count;
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

    cout << obj.countGreaterThanAverage(arr, n);

    return 0;
}