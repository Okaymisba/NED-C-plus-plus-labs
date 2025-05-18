#include <iostream>
using namespace std;

int main()
{
    int terms;
    cout << "Enter the number of terms for the Fibonacci series: ";
    cin >> terms;

    long long first = 0, second = 1, next;

    cout << "\nFibonacci Series up to " << terms << " terms:\n";
    cout << first << ", " << second;

    for (int i = 3; i <= terms; ++i)
    {
        next = first + second;
        cout << ", " << next;
        first = second;
        second = next;
    }

    cout << endl;
    return 0;
}
