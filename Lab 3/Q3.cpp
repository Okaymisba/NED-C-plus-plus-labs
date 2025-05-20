#include <iostream>
using namespace std;

struct Number
{
    int num;
};

void swapNumbers(Number &a, Number &b)
{
    int temp = a.num;
    a.num = b.num;
    b.num = temp;
}

int main()
{
    Number n1, n2;

    cout << "Enter value for n1: ";
    cin >> n1.num;
    cout << "Enter value for n2: ";
    cin >> n2.num;

    swapNumbers(n1, n2);

    cout << "After swapping:" << endl;
    cout << "n1 = " << n1.num << endl;
    cout << "n2 = " << n2.num << endl;

    return 0;
}
