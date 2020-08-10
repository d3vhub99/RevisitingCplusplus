#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // maximum of two numbers
    int x, y;
    cin >> x >> y;
    // if(x>y){
    //     cout<<"max is "<<x;
    // }
    // else{
    //     cout<<"max is "<<y;
    // }
    // return 0;

    // divide number
    // if(y == 0){
    //     cout<<"No division possible";
    // }
    // else{
    //     cout<<floor(x/y)/100<<endl;
    // }
    // return 0;

    // compouund conditional statement

    // if(x >= 9 && x<=18){
    //     cout<<"x is between9 and 18";
    // }
    // else{
    //     cout<<"Y whatever";
    // }

    // Leap year or not
    if (x % 4 == 0)
    {
        if (x % 100 == 0)
        {
            if (x % 400 == 0)
            {
                cout << "leap year";
            }
            else
            {
                cout << "not a leap year";
            }
            
        }
        else
            {
                cout << "is a leap year";
            }
    }
    else
        {
            cout << "not a leap year";
        }

    return 0;
}