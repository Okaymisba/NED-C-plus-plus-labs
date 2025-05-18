#include <iostream>
using namespace std;

int main()
{
    int calls;
    double bill = 200.0;

    cout << "Enter the number of calls made: ";
    cin >> calls;

    if (calls > 100)
    {
        if (calls <= 150)
        {
            bill += (calls - 100) * 0.60;
        }
        else if (calls <= 200)
        {
            bill += 50 * 0.60 + (calls - 150) * 0.50;
        }
        else
        {
            bill += 50 * 0.60 + 50 * 0.50 + (calls - 200) * 0.40;
        }
    }

    cout << "The total telephone bill is: Rs. " << bill << endl;

    return 0;
}
