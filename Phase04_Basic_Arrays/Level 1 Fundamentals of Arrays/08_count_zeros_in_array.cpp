// Count the number of zero elements in an array

#include <iostream>
using namespace std;

class Solution
{
public:
    int countZeros(int arr[], int n)
    {

        int count = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] == 0)
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

    cout << obj.countZeros(arr, n);

    return 0;
}