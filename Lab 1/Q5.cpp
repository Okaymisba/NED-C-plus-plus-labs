#include <iostream>

using namespace std;

int main()
{
    string phrase, reverse;

    cout << "Enter a phrase: ";
    getline(cin, phrase);

    for (int i = phrase.length() - 1; i >= 0; i--)
    {
        reverse += phrase[i];
    }

    cout << "The reverse of the phrase is: " << reverse << endl;

    return 0;
}