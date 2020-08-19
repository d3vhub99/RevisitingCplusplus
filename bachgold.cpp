// http://codeforces.com/problemset/problem/749/A

#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,i;
    cin >> n;
    int k = n/2;
    cout<< k <<endl;
    while(n > 3){
        cout<< 2 <<" ";
        n-=2;
    }
    cout<< n;
    return 0;
}