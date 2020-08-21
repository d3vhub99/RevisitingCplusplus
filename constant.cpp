// #include<iostream>
// using namespace std;

// int main(){
//     int const x = 10;

//     // x = 30;  //cannot be modified because costant int

//     cout<< x << endl;
//      int y= 20;
//     const int * ptr = &y;
//     //  ++(*ptr);
//     const int z =30;
//     int const *ptr1 = &z;
//     // (*ptr1)++; // cannot be modified 
//     //  cout << *ptr1 <<" "<< y << endl; // cannot be modified as the ptr is constant no matter where ptr is pointing

//      int a = 20;
//      int * ptr2 = &a;

//     //  ptr1 = &a; //cannot move ptr 1 to a 

//     const int * const ptr3 = &a; //cannot modify the data ptr3 or move the variable to any other except a
// }
#include<iostream>
using namespace std;
class Demo {
    public: 
    int x = 10;
    int y =20;

    // void display() const{ //cannot modify the data members of class, the data members become read only but cannot be modified
    //     x++;
    //     cout<<x <<" "<< y << endl;
    // }

    
};
void fun(const int &a, int &b){
        cout<< a << " "<< b << endl;
        a++;
    }   // make function inline and cannot modify the value of a and b
int main(){
    int x = 10;
    int y = 200;
    fun(x,y);
}