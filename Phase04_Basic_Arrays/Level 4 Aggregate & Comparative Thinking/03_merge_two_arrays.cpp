// Merge two arrays into a third array

#include <iostream>
using namespace std;

class Solution
{
public:
    void mergeArrays(int arr1[], int arr2[], int merged[],
                     int n1, int n2)
    {

        for (int i = 0; i < n1; i++)
        {
            merged[i] = arr1[i];
        }

        for (int i = 0; i < n2; i++)
        {
            merged[n1 + i] = arr2[i];
        }
    }
};

int main()
{
    Solution obj;

    int n1, n2;
    cin >> n1;

    int arr1[100];
    int arr2[100];
    int merged[200];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cin >> n2;

    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    obj.mergeArrays(arr1, arr2, merged, n1, n2);

    for (int i = 0; i < n1 + n2; i++)
    {
        cout << merged[i] << " ";
    }

    return 0;
}