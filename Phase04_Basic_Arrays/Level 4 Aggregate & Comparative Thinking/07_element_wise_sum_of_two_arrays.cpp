// Find the element-wise sum of two arrays: C[i] = A[i] + B[i]

#include <iostream>
using namespace std;

class Solution
{
public:
    void elementWiseSum(int arr1[], int arr2[], int result[], int n)
    {
        for (int i = 0; i < n; i++)
        {
            result[i] = arr1[i] + arr2[i];
        }
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    int arr1[100], arr2[100], result[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    obj.elementWiseSum(arr1, arr2, result, n);

    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}