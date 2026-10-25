// Create a frequency array to count the occurrence of each number

#include <iostream>
using namespace std;

class Solution
{
public:
    void createFrequencyArray(int arr[], int n)
    {
        int frequency[101] = {0};

        for (int i = 0; i < n; i++)
        {
            frequency[arr[i]]++;
        }

        for (int i = 0; i <= 100; i++)
        {
            if (frequency[i] > 0)
            {
                cout << i << " occurs " << frequency[i] << " times" << endl;
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

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    obj.createFrequencyArray(arr, n);

    return 0;
}