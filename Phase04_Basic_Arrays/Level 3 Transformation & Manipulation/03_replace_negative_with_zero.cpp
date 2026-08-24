// Replace every negative number with 0

#include <iostream>
using namespace std;

class Solution
{
public:
    void replaceNegative(int arr[], int n)
    {

        for (int i = 0; i < n; i++)
        {

            if (arr[i] < 0)
                arr[i] = 0;
        }
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

    obj.replaceNegative(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}