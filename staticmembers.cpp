// #include<iostream>

// using namespace std;
// class Test{
//     public:
//     int a;
//     static int count;

//     Test(){
//         a = 10;
//         count++;
//     }
//     static int getCount(){
//     // a++; //not static and invalid use
//     return count;
// }
// };

// int Test:: count = 0; //global variable with local scope of test class only accessible in the test class
// int main(){
//     Test t1,t2; //count common to both objects while a will be created seperate for two objects
//     cout<< t1.count << endl;
//     cout<< t2.count << endl;
//     t1.count = 25;
//     cout<< t2.count << endl;
//     cout << Test :: count << endl;
//     cout << Test :: getCount() << endl;  //static members functions can be called upon a class or object
//  }
// #include<iostream>
// using namespace std;

// class Innova{
//     public :
//     static int price;
//     static int getPrice(){
//         return price;
//     }
// };
// int Innova :: price = 20;


// int main(){
//     Innova i1,i2,i3;
//     cout<< i1.price << endl;
//     cout<< i2.price << endl;
//     cout << i3.price << endl;
//     cout << Innova :: price << endl;
// }
#include<iostream>
#include<string>
using namespace std;
class Student{
    public: 
    int roll;
    string name;
    static int admission;
    Student(string n){
        admission++;
        roll = admission;
        name = n;
    }
    void display(){
        cout<< name << " "<<roll<< endl;
    }
};
int Student :: admission = 0;
int main(){
    Student s1("John");
    Student s2("Dev");
    Student s3("Do");
    s1.display();
    s2.display();
    s3.display();
    cout << Student :: admission;
}