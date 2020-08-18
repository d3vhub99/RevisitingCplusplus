// http://codeforces.com/problemset/problem/448/A


#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    double a1,a2,a3,b1,b2,b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    cin >> n;
    double sumC, sumM;
    sumC= a1+a2+a3;
    sumM = b1+b2+b3;
    sumC= ceil(sumC / 5);
    sumM = ceil(sumM / 10);
    if((sumC + sumM) <= n){
        cout<<"Yes"<< endl; 
    }
    else{
        cout<<"No" << endl;
    }
    return 0;
}
