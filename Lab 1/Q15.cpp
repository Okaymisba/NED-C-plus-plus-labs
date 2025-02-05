#include <iostream>

using namespace std;

int main()
{
    int num, tens, ones;

    cout << "Enter a 2 digit integer value: ";
    cin >> num;

    tens = num / 10;
    ones = num % 10;

    cout << "Reverse of this value is: " << ones << tens << endl;

    return 0;
}
