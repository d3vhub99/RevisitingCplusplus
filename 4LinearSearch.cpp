#include<iostream>

using namespace std;

int main(){

    int array[100];
    int i, key;
    for(i = 0 ; i < 5 ; i++){
        cin>> array[i];
    }
    cin >> key;
    for(i= 0 ; i< 5 ; i++){
        if(key == array[i]){
            cout<<"found the key at "<< i;
            exit(0);
        }
    }
    cout<< "Key not found";
    return 0;

}