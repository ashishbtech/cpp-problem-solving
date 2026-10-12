// Find the common elements between two arrays

#include <iostream>
using namespace std;

class Solution
{
public:
    void findCommonElements(int arr1[], int arr2[], int n1, int n2)
    {

        for (int i = 0; i < n1; i++)
        {

            bool found = false;

            for (int j = 0; j < n2; j++)
            {

                if (arr1[i] == arr2[j])
                {
                    found = true;
                    break;
                }
            }

            if (found)
            {
                cout << arr1[i] << " ";
            }
        }
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

    obj.findCommonElements(arr1, arr2, n1, n2);

    return 0;
}