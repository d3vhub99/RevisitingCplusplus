#include <iostream>

using namespace std;

class Base
{
public:
    void fun1()
    {
        cout << "fun1 of base" << endl;
    }
};

class Derived : public Base
{
public:
    void fun1()
    {
        cout << "fun1 of derived" << endl;
    }
};

class Rectangle
{
public:
    void areaR()
    {
        cout << "Area of Rectangle"
             << "\n";
    }
};
class Cuboid : public Rectangle
{
public:
    void volumeC()
    {
        cout << "cuboid volume" << endl;
    }
};

class Car
{
public:
    virtual void start() = 0;
    // {
    //     cout << "car started" << endl;
    // }
    virtual void display()
    {
        cout << "Display of Base";
    }
};

class Innova : public Car
{
public:
    inline void start();
};
void Innova ::start()
{
    cout << "Innova started" << endl;
}
class Swift : public Car
{
public:
    inline void start();
};
void Swift ::start()
{
    cout << "Swift started" << endl;
}
class Advanced : public Car
{
public:
    void music()
    {
        cout << "music playing" << endl;
    }
    void display()
    {
        cout << "Display of Advanced";
    }
};

int main()
{
    Base *p = new Derived();
    Car *c = new Innova();
    c->start();
    // RUNTIME POLYMORPHISM(INNOVA AND SWIFT START METHOD)
    c = new Swift();
    c->start();
    p->fun1();
    c->display();
    // d.fun1();
    return 0;
}