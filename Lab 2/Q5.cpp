#include <iostream>
using namespace std;

int main()
{
    int number, limit;

    cout << "Enter the number for which you want the multiplication table: ";
    cin >> number;

    cout << "Enter the limit for the table: ";
    cin >> limit;

    cout << "\nMultiplication Table of " << number << ":\n";
    cout << "-----------------------------\n";

    for (int i = 1; i <= limit; ++i)
    {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}
