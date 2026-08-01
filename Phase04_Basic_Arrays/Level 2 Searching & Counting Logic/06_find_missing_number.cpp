// Find the missing number from an array containing numbers from 1 to n

#include <iostream>
using namespace std;

class Solution
{
public:
    int findMissingNumber(int arr[], int size)
    {

        int n = size + 1;

        int expectedSum = n * (n + 1) / 2;
        int actualSum = 0;

        for (int i = 0; i < size; i++)
        {
            actualSum += arr[i];
        }

        return expectedSum - actualSum;
    }
};

int main()
{
    Solution obj;

    int size;
    cin >> size;

    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << obj.findMissingNumber(arr, size);

    return 0;
}