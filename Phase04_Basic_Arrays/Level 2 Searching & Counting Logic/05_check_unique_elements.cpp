// Check if all elements in an array are unique

#include <iostream>
using namespace std;

class Solution
{
public:
    string checkUnique(int arr[], int n)
    {

        for (int i = 0; i < n; i++)
        {

            for (int j = i + 1; j < n; j++)
            {

                if (arr[i] == arr[j])
                    return "Elements are Not Unique";
            }
        }

        return "All Elements are Unique";
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

    cout << obj.checkUnique(arr, n);

    return 0;
}