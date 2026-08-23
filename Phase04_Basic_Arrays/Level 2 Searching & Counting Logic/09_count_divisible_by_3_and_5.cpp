// Count how many numbers are divisible by both 3 and 5

#include <iostream>
using namespace std;

class Solution
{
public:
    int countDivisible(int arr[], int n)
    {

        int count = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
                count++;
        }

        return count;
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

    cout << obj.countDivisible(arr, n);

    return 0;
}