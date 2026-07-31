// Find the first occurrence of a given number in the array

#include <iostream>
using namespace std;

class Solution
{
public:
    int findFirstOccurrence(int arr[], int n, int x)
    {

        for (int i = 0; i < n; i++)
        {

            if (arr[i] == x)
                return i;
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

    int x;
    cin >> x;

    cout << obj.findFirstOccurrence(arr, n, x);

    return 0;
}