#include <iostream>

using namespace std;

int main()
{
    int n1 = 1;
    int n2 = 1;
    int terms;
    cout << "Enter the number of terms for Fibonacci sequence: ";
    cin >> terms;

    for (int i = 0; i < terms; i++)
    {
        cout << n1 << " ";
        int nextTerm = n1 + n2;
        n1 = n2;
        n2 = nextTerm;
    }
    cout << endl;

    return 0;
}