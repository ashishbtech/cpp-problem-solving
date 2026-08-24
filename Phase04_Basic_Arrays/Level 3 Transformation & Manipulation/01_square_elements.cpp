// Create a new array containing squares of all numbers

#include <iostream>
using namespace std;

class Solution
{
public:
    void squareElements(int arr[], int newArr[], int n)
    {

        for (int i = 0; i < n; i++)
        {
            newArr[i] = arr[i] * arr[i];
        }
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    int arr[100];
    int newArr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    obj.squareElements(arr, newArr, n);

    for (int i = 0; i < n; i++)
    {
        cout << newArr[i] << " ";
    }

    return 0;
}