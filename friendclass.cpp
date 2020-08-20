#include<iostream>
using namespace std;

class Test{
    int a;
    public:
    int b;
    protected:
    int c;
    friend void fun();
};
class your;
class My{
    private: int a1;
    protected : int b1;
    public : int c1;
    friend your;
};

class your{
    public: My m;
    void fun1(){
        m.a1= 10;
        m.b1= 10;
        m.c1= 10;
    }
};
void fun(){
    Test t;
    t.a = 10; //accessible after friend void fun();
    t.b = 15;
    t.c = 9;  //only this accessible in absence of friend function
}

int main(){
    fun();
}