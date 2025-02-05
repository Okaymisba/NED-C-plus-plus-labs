#include <iostream>

using namespace std;

int main()
{
    float fahrenheit, celsius;

    cout << "Enter the Fahrenheit temperature: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Celsius Temperature: " << celsius << endl;

    return 0;
}
