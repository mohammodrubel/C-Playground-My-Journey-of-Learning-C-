
#include <iostream>
using namespace std;
int main()
{
    char c;
    cin >> c;
    switch (c)
    {
    case 'a':
    case 'A':
        cout << "Vowel\n";
        break;

    case 'e':
    case 'E':
        cout << "Vowel\n";
        break;

    case 'i':
    case 'I':
        cout << "Vowel\n";
        break;

    case 'o':
    case 'O':
        cout << "Vowel\n";
        break;

    case 'u':
    case 'U':
        cout << "Vowel\n";
        break;

    default:
    cout << "Consonant";
    }


}