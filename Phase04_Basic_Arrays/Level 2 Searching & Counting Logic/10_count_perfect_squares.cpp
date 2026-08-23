// Count how many elements in an array are perfect squares

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPerfectSquare(int n)
    {

        if (n < 0)
            return false;

        for (int i = 0; i * i <= n; i++)
        {

            if (i * i == n)
                return true;
        }

        return false;
    }

    int countPerfectSquares(int arr[], int n)
    {

        int count = 0;

        for (int i = 0; i < n; i++)
        {

            if (isPerfectSquare(arr[i]))
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

    cout << obj.countPerfectSquares(arr, n);

    return 0;
}