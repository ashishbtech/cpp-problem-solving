// Compare two arrays and check if they are equal (same elements and order)

#include <iostream>
using namespace std;

class Solution
{
public:
    bool areEqual(int arr1[], int arr2[], int n)
    {

        for (int i = 0; i < n; i++)
        {

            if (arr1[i] != arr2[i])
                return false;
        }

        return true;
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    int arr1[100];
    int arr2[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    if (obj.areEqual(arr1, arr2, n))
        cout << "Arrays are Equal";
    else
        cout << "Arrays are Not Equal";

    return 0;
}