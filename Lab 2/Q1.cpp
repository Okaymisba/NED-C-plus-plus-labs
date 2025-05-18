#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 65 && ch <= 90)
    {
        cout << "The character is a Capital Letter (A-Z)." << endl;
    }
    else if (ch >= 97 && ch <= 122)
    {
        cout << "The character is a Small Case Letter (a-z)." << endl;
    }
    else if (ch >= 48 && ch <= 57)
    {
        cout << "The character is a Digit (0-9)." << endl;
    }
    else if ((ch >= 0 && ch <= 47) || (ch >= 58 && ch <= 64) ||
             (ch >= 91 && ch <= 96) || (ch >= 123 && ch <= 127))
    {
        cout << "The character is a Special Symbol." << endl;
    }
    else
    {
        cout << "Invalid character entered." << endl;
    }

    return 0;
}
