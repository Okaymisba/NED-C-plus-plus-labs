#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n3, max_num;

    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    cout << "Enter the third number: ";
    cin >> n3;

    if (n1 > n2 && n1 > n3)
    {
        max_num = n1;
    }
    else if (n2 > n1 && n2 > n3)
    {
        max_num = n2;
    }
    else
    {
        max_num = n3;
    }

    cout << "The largest number is: " << max_num << endl;

    return 0;
}