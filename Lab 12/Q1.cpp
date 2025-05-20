#include <iostream>
#include <cmath>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double r)
    {
        radius = r;
    }

    friend double calculateArea(Circle c);
};

double calculateArea(Circle c)
{
    return M_PI * c.radius * c.radius;
}

int main()
{
    Circle c1(5.0);
    cout << "Area of the circle: " << calculateArea(c1) << endl;
    return 0;
}
