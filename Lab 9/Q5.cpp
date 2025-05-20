#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal
{
public:
    void makeSound() override
    {
        cout << "Dog says: Woof Woof!" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() override
    {
        cout << "Cat says: Meow Meow!" << endl;
    }
};

int main()
{
    Animal *animal;

    Dog dog;
    Cat cat;

    animal = &dog;
    animal->makeSound();

    animal = &cat;
    animal->makeSound();

    return 0;
}
