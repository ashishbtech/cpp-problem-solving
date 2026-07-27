// Count the number of positive and negative elements in an array

#include <iostream>
using namespace std;

class Solution
{
public:
    void countPositiveNegative(int arr[], int n)
    {

        int positiveCount = 0;
        int negativeCount = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] > 0)
                positiveCount++;
            else if (arr[i] < 0)
                negativeCount++;
        }

        cout << "Positive Count = " << positiveCount << endl;
        cout << "Negative Count = " << negativeCount;
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

    obj.countPositiveNegative(arr, n);

    return 0;
}