#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    double area() override
    {
        return M_PI * radius * radius;
    }
};

class Rectangle : public Shape
{
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() override
    {
        return length * width;
    }
};

int main()
{
    Circle c(5.0);
    Rectangle r(4.0, 6.0);

    cout << "Area of Circle: " << c.area() << endl;
    cout << "Area of Rectangle: " << r.area() << endl;

    return 0;
}
