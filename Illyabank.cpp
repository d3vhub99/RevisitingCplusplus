#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    long long bacc, result,temp, result1;
    cin >> bacc;
    if(bacc >= 0) cout<< bacc<<"\n";
    else{
        temp = bacc;
        result = temp / 10;
        result1 = temp / 100 *10 + temp % 10;
        cout<< max(result, result1)<< "\n";
    }
    return 0;
}