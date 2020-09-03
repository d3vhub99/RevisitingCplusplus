#include<iostream>
using namespace std;
int main(){
    int n , m , k, result;
    cin >>n >> m >> k;
    result = 2 * n * m;
    int lane = (k - 1) / (2 * m) + 1;
    int desk = (k - 1) / 2 % m + 1;
    cout<< lane << " "<<desk<<" ";
    if( k %2==1) cout<< 'L'<<'\n';
    else cout<< 'R'<< '\n';
    return 0;
}