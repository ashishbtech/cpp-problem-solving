// Create a new array containing only even elements

#include <iostream>
using namespace std;

class Solution
{
public:
    int copyEvenElements(int arr[], int newArr[], int n)
    {

        int index = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] % 2 == 0)
            {
                newArr[index] = arr[i];
                index++;
            }
        }

        return index;
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

    int newSize = obj.copyEvenElements(arr, newArr, n);

    for (int i = 0; i < newSize; i++)
    {
        cout << newArr[i] << " ";
    }

    return 0;
}