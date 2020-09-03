#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    string s1, s2, result, temp;
    cin >> s1 >> s2 >> result;
    temp = s1+s2;
    sort(temp.begin(), temp.end());
    sort(result.begin(), result.end());
    if(temp == result ){
        cout<< "YES"<<"\n";
    }
    else{
        cout<<"No" << "\n";
    }
    return 0;
}