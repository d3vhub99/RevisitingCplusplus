// http://codeforces.com/problemset/problem/151/A


#include<iostream>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    double toasts_bottle, toast_lime, toast_salt;
    double temp, min;
    int result;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np ;
    toasts_bottle = (k * l) /nl;
    toast_salt = p / np;
    toast_lime = c* d;
    temp = (toasts_bottle < toast_salt)    ? toasts_bottle : toast_salt;
    min =  (toast_lime < temp) ? toast_lime : temp;
    result = min/ n;
    cout<< result<< endl;
    return 0;
}
