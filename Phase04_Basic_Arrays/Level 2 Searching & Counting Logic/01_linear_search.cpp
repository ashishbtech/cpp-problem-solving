// Input an element x and check if it exists in the array

#include <iostream>
using namespace std;

class Solution
{
public:
    string searchElement(int arr[], int n, int x)
    {

        for (int i = 0; i < n; i++)
        {

            if (arr[i] == x)
                return "Element Found";
        }

        return "Element Not Found";
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

    int x;
    cin >> x;

    cout << obj.searchElement(arr, n, x);

    return 0;
}