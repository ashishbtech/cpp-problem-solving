// Remove duplicate elements from an array

#include <iostream>
using namespace std;

class Solution
{
public:
    int removeDuplicates(int arr[], int n)
    {

        int newSize = 0;

        for (int i = 0; i < n; i++)
        {

            bool duplicate = false;

            for (int j = 0; j < newSize; j++)
            {

                if (arr[i] == arr[j])
                {
                    duplicate = true;
                    break;
                }
            }

            if (!duplicate)
            {
                arr[newSize] = arr[i];
                newSize++;
            }
        }

        return newSize;
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

    int newSize = obj.removeDuplicates(arr, n);

    for (int i = 0; i < newSize; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}