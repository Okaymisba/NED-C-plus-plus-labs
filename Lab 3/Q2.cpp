#include <iostream>
using namespace std;

struct Rectangle
{
    float length;
    float width;
};

int main()
{
    Rectangle rect;

    cout << "Enter length: ";
    cin >> rect.length;
    cout << "Enter width: ";
    cin >> rect.width;

    float area = rect.length * rect.width;

    cout << "Area of the rectangle: " << area << endl;

    return 0;
}
