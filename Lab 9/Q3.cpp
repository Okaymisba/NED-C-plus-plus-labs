#include <iostream>
using namespace std;

class Vehicle
{
public:
    virtual double fuelEfficiency() = 0;
    virtual ~Vehicle() {}
};

class Car : public Vehicle
{
private:
    double distance;
    double fuel;

public:
    Car(double d, double f) : distance(d), fuel(f) {}

    double fuelEfficiency() override
    {
        return distance / fuel;
    }
};

class Truck : public Vehicle
{
private:
    double distance;
    double fuel;

public:
    Truck(double d, double f) : distance(d), fuel(f) {}

    double fuelEfficiency() override
    {
        return distance / fuel;
    }
};

int main()
{
    Car myCar(500, 25);
    Truck myTruck(800, 100);

    cout << "Car Fuel Efficiency: " << myCar.fuelEfficiency() << " km/l" << endl;
    cout << "Truck Fuel Efficiency: " << myTruck.fuelEfficiency() << " km/l" << endl;

    return 0;
}
