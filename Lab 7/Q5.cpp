#include <iostream>
#include <cmath>
using namespace std;

class Shape
{
protected:
    string color;

public:
    Shape(string c) : color(c) {}

    virtual double area() = 0; 

    virtual void display()
    {
        cout << "Color: " << color << endl;
    }

    virtual ~Shape() {}
};

class Rectangle : public Shape
{
private:
    double width;
    double height;

public:
    Rectangle(string c, double w, double h) : Shape(c), width(w), height(h) {}

    double area() override
    {
        return width * height;
    }

    void display() override
    {
        cout << "Rectangle - Color: " << color
             << ", Width: " << width
             << ", Height: " << height
             << ", Area: " << area() << endl;
    }
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(string c, double r) : Shape(c), radius(r) {}

    double area() override
    {
        return M_PI * radius * radius;
    }

    void display() override
    {
        cout << "Circle - Color: " << color
             << ", Radius: " << radius
             << ", Area: " << area() << endl;
    }
};

int main()
{
    Rectangle rect("Red", 4.5, 7.2);
    Circle circ("Blue", 3.5);

    Shape *shapePtr;

    shapePtr = &rect;
    shapePtr->display();

    shapePtr = &circ;
    shapePtr->display();

    return 0;
}
