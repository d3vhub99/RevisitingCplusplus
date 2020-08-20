#include<iostream>

using namespace std;

class Base{
    public : 
    void fun1(){
        cout<<"fun1 of base"<<endl;
    }
};

class Derived : public Base{
    public:
    void fun2(){
        cout<<"fun2 of dervied"<<endl;

    }
};

class Rectangle{
public:
void areaR(){
    cout<<"Area of Rectangle"<<"\n";
}
};
class Cuboid: public Rectangle{
public:
void volumeC(){
    cout<<"cuboid volume"<<endl;
}
};

class Car{
    public: 
    void start(){
        cout<<"car started"<<endl;
    }
};

class Advanced : public Car{
    public:
    void music(){
        cout<<"music playing"<<endl;
    }
};

int main(){
    Base *p;
    Cuboid c;
    Rectangle *ptr = &c;
    ptr -> areaR();
    // ptr -> volumeC();
    p = new Derived();
    p->fun1();
    /*Base b
    Derived *p = &b; NOT ALLOWED*/
    Advanced A;
    Car *car = &A;
    car->start();
    // car->music(); Won't work as cannot call music as it's not in the car class
}