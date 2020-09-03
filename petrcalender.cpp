#include<iostream>
using namespace std;
int main(){
    int m, d, cweeks= 0;
    cin >> m >> d;
    int m1[] ={31,28,31,30,31,30,31,31,30,31,30,31};
    int d1[] = {1,2,3,4,5,6,7};
    if(m >= 1 && m <=12){
        if(d >=1 && d <=7){
            cweeks = ((d-1)+m1[m-1] -1)/ 7 + 1;
        }
    }
    cout<< cweeks<<"\n";
    return 0;
}