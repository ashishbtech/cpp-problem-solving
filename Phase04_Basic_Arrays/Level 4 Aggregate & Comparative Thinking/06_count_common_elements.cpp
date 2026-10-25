// Count how many elements are common between two arrays

#include <iostream>
using namespace std;

class Solution
{
public:
    int countCommonElements(int arr1[], int arr2[], int n1, int n2)
    {

        int count = 0;
        bool matched[100] = {false};

        for (int i = 0; i < n1; i++)
        {

            for (int j = 0; j < n2; j++)
            {

                if (arr1[i] == arr2[j] && !matched[j])
                {
                    count++;
                    matched[j] = true;
                    break;
                }
            }
        }

        return count;
    }
};

int main()
{
    Solution obj;

    int n1, n2;
    cin >> n1;

    int arr1[100];
    int arr2[100];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }

    cin >> n2;

    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << obj.countCommonElements(arr1, arr2, n1, n2);

    return 0;
}