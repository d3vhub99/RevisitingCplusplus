http://codeforces.com/problemset/problem/764/A


#include<iostream>
using namespace std;

int main(){
    int n,m,z;
    int count=0;
    cin >> n >> m >> z;
    for(int i = 1 ; i <=z ; i++){
        if(i % n == 0 && i % m == 0){
            count++;
        }
    }
    cout<< count;
}
