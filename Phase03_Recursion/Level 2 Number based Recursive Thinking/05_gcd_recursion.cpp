// Find GCD (HCF) of two numbers using recursion

#include <iostream>
using namespace std;

class Solution
{
public:
    int Findgcd(int a, int b)
    {
        if (b == 0)
            return a;

            
        return Findgcd(b, a % b);
    }
};

int main()
{
    Solution obj;

    int firstNum, secondNum;
    cout << " Give First and second number to get GCD : ";
    cin >> firstNum >> secondNum;

    cout << obj.Findgcd(firstNum, secondNum);

    return 0;
}