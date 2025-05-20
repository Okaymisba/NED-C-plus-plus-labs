#include <iostream>
using namespace std;

class Base
{
private:
    int privateVar = 1;

protected:
    int protectedVar = 2;

public:
    int publicVar = 3;

    void showBase()
    {
        cout << "Base privateVar: " << privateVar << endl;
        cout << "Base protectedVar: " << protectedVar << endl;
        cout << "Base publicVar: " << publicVar << endl;
    }
};

class Derived : public Base
{
public:
    void showDerived()
    {
        cout << "Derived protectedVar: " << protectedVar << endl;
        cout << "Derived publicVar: " << publicVar << endl;
    }
};

int main()
{
    Base baseObj;
    Derived derivedObj;

    baseObj.showBase();

    derivedObj.showDerived();

    cout << "Access from main(): " << endl;

    cout << baseObj.publicVar << endl;

    cout << derivedObj.publicVar << endl;

    return 0;
}
