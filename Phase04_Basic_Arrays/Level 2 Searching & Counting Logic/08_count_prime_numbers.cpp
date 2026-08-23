// Count the number of prime numbers in an array

#include <iostream>
using namespace std;

class Solution
{
public:
    bool isPrime(int n)
    {

        if (n < 2)
            return false;

        for (int i = 2; i < n; i++)
        {

            if (n % i == 0)
                return false;
        }

        return true;
    }

    int countPrimes(int arr[], int n)
    {

        int count = 0;

        for (int i = 0; i < n; i++)
        {

            if (isPrime(arr[i]))
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

    cout << obj.countPrimes(arr, n);

    return 0;
}

