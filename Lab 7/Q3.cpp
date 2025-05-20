#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Circle" << endl;
    }
};

class Square : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing Square" << endl;
    }
};

int main()
{
    Shape s;
    Circle c;
    Square sq;

    s.draw();
    c.draw();
    sq.draw();

    return 0;
}
