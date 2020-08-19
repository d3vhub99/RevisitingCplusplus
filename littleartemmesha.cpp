//  http://codeforces.com/problemset/problem/669/A
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int result = (2*(n/3))+((n%3!=0) ? 1 : 0);
    cout<<result<< endl;
    return 0;
}
