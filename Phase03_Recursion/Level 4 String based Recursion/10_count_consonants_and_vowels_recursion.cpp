// Count consonants and vowels separately using recursion

#include <iostream>
using namespace std;

class Solution
{
public:
    void countCharacters(string str, int index, int &vowels, int &consonants)
    {

        if (index == str.length())
            return;

        char ch = str[index];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {

            if (ch == 'a' || ch == 'e' || ch == 'i' ||
                ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U')
            {

                vowels++;
            }
            else
            {

                consonants++;
            }
        }

        countCharacters(str, index + 1, vowels, consonants);
    }
};

int main()
{
    Solution obj;

    string str;
    cin >> str;

    int vowels = 0;
    int consonants = 0;

    obj.countCharacters(str, 0, vowels, consonants);

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants;

    return 0;
}