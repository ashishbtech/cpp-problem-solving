// Count how many times a given element appears in the array
#include <iostream>
using namespace std;

class Solution
{
public:
    int countOccurrences(int arr[], int n, int x)
    {

        int count = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] == x)
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

    int x;
    cin >> x;

    cout << obj.countOccurrences(arr, n, x);
    return 0;
}