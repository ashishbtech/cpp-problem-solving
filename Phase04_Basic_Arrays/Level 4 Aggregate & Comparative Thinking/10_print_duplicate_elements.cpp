// Print all elements that appear more than once in an array

#include <iostream>
using namespace std;

class Solution
{
public:
    void printDuplicateElements(int arr[], int n)
    {
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            bool alreadyChecked = false;

            for (int j = 0; j < i; j++)
            {
                if (arr[i] == arr[j])
                {
                    alreadyChecked = true;
                    break;
                }
            }

            if (alreadyChecked)
            {
                continue;
            }

            int count = 0;

            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                }
            }

            if (count > 1)
            {
                cout << arr[i] << " ";
                found = true;
            }
        }

        if (!found)
        {
            cout << "No duplicate elements";
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

    obj.printDuplicateElements(arr, n);

    return 0;
}