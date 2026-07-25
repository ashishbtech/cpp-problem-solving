// Count the number of even and odd elements in an array

#include <iostream>
using namespace std;

class Solution
{
public:
    void countEvenOdd(int arr[], int n)
    {

        int evenCount = 0;
        int oddCount = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] % 2 == 0)
                evenCount++;
            else
                oddCount++;
        }

        cout << "Even Count = " << evenCount << endl;
        cout << "Odd Count = " << oddCount;
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

    obj.countEvenOdd(arr, n);

    return 0;
}