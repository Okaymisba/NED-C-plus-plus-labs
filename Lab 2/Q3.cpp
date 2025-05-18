#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool isStrongPassword(const string &password)
{
    if (password.length() < 8)
    {
        return false;
    }

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    for (char ch : password)
    {
        if (isupper(ch))
            hasUpper = true;
        else if (islower(ch))
            hasLower = true;
        else if (isdigit(ch))
            hasDigit = true;
        else if (ispunct(ch))
            hasSpecial = true;

        if (hasUpper && hasLower && hasDigit && hasSpecial)
        {
            return true;
        }
    }

    return false;
}

int main()
{
    string password;
    cout << "Enter your password: ";
    cin >> password;

    if (isStrongPassword(password))
    {
        cout << "The password is strong." << endl;
    }
    else
    {
        cout << "The password is not strong enough." << endl;
        cout << "Make sure it has at least 8 characters, ";
        cout << "one uppercase letter, one lowercase letter, ";
        cout << "one digit, and one special character." << endl;
    }

    return 0;
}
