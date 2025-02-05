#include <iostream>

using namespace std;

int main()
{
    int n1, n2, sum, avg;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    sum = n1 + n2;
    avg = sum / 2;

    cout << "The sum of the numbers is: " << sum << endl;
    cout << "The average of the numbers is: " << avg << endl;

    return 0;
}