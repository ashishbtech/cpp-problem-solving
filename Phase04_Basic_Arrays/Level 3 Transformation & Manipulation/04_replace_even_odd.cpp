// Replace all even numbers with 1 and all odd numbers with 0

#include <iostream>
using namespace std;

class Solution
{
public:
    void replaceEvenOdd(int arr[], int n)
    {

        for (int i = 0; i < n; i++)
        {

            if (arr[i] % 2 == 0)
                arr[i] = 1;
            else
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

    obj.replaceEvenOdd(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}