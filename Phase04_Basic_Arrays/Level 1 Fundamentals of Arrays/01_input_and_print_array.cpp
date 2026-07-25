// Input n integers into an array and print them

#include <iostream>
using namespace std;

class Solution
{
public:
    void printArray(int arr[], int n)
    {

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
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

    obj.printArray(arr, n);

    return 0;
}