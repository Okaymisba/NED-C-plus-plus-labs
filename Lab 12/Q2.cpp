#include <iostream>
using namespace std;

class Rectangle
{
private:
    double length;
    double width;

public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }

    friend double calculatePerimeter(Rectangle r);
};

double calculatePerimeter(Rectangle r)
{
    return 2 * (r.length + r.width);
}

int main()
{
    Rectangle rect(10.0, 5.0);
    cout << "Perimeter of the rectangle: " << calculatePerimeter(rect) << endl;
    return 0;
}
