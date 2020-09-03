#include<iostream>
using namespace std;

int main(){
    int n, m, result;
    cin >> n >> m;
    if(m < n) result = m;
    else result = n;
    if(result % 2 == 0) cout<< "Malvika"<<"\n";
    else cout<< "Akshat" << '\n';
    return 0;
}