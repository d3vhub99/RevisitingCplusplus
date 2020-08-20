#include<iostream>
using namespace std;

class Outer {
    public:
    void fun(){
        i.display();
    }
    class Inner{
        public :
        void display(){
            cout<< "Inner Display" << endl;
        }
    };
    Inner i;
};

int main(){
    Outer :: Inner i; //because Inner is public it's accessible
}