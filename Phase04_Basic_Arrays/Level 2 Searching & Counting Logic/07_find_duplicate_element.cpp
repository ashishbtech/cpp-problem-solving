// Find the duplicate element in an array

#include <iostream>
using namespace std;

class Solution
{
public:
    int findDuplicate(int arr[], int n)
    {

        for (int i = 0; i < n; i++)
        {

            for (int j = i + 1; j < n; j++)
            {

                if (arr[i] == arr[j])
                    return arr[i];
            }
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

    cout << obj.findDuplicate(arr, n);

    return 0;
}