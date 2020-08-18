#include<iostream>
using namespace std;
int main(){
      int n,k,w,sum =0, borrow;
      cin >> k >> n >> w;
      for(int i = 1; i<= w ; i++){
            sum = sum + (i * k);
      }
      if(sum > n){
            borrow = sum- n;
      }
      else {
            borrow = 0;
      }
      cout << borrow<<"\n";
      return 0;
}