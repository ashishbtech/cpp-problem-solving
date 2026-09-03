// Create two new arrays containing positive and negative elements separately

#include <iostream>
using namespace std;

class Solution
{
public:
    void separateElements(int arr[], int positive[], int negative[], int n,
                          int &positiveSize, int &negativeSize)
    {

        positiveSize = 0;
        negativeSize = 0;

        for (int i = 0; i < n; i++)
        {

            if (arr[i] > 0)
            {
                positive[positiveSize] = arr[i];
                positiveSize++;
            }
            else if (arr[i] < 0)
            {
                negative[negativeSize] = arr[i];
                negativeSize++;
            }
        }
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    int arr[100];
    int positive[100];
    int negative[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int positiveSize;
    int negativeSize;

    obj.separateElements(arr, positive, negative, n, positiveSize, negativeSize);

    for (int i = 0; i < positiveSize; i++)
    {
        cout << positive[i] << " ";
    }

    cout << endl;

    for (int i = 0; i < negativeSize; i++)
    {
        cout << negative[i] << " ";
    }

    return 0;
}