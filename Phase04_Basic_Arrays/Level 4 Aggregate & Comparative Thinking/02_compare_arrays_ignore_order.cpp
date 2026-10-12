// Check whether two arrays contain the same elements, ignoring order

#include <iostream>
using namespace std;

class Solution
{
public:
    bool haveSameElements(int arr1[], int arr2[], int n)
    {

        for (int i = 0; i < n; i++)
        {

            bool found = false;

            for (int j = 0; j < n; j++)
            {

                if (arr1[i] == arr2[j])
                {
                    found = true;
                    break;
                }
            }

            if (!found)
                return false;
        }

        for (int i = 0; i < n; i++)
        {

            bool found = false;

            for (int j = 0; j < n; j++)
            {

                if (arr2[i] == arr1[j])
                {
                    found = true;
                    break;
                }
            }

            if (!found)
                return false;
        }

        return true;
    }
};

int main()
{
    Solution obj;

    int n;
    cin >> n;

    int arr1[100];
    int arr2[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    if (obj.haveSameElements(arr1, arr2, n))
        cout << "Arrays Contain the Same Elements";
    else
        cout << "Arrays Do Not Contain the Same Elements";

    return 0;
}