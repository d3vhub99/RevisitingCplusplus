#include<iostream>
using namespace std;

int main()
{
    // int A[]={8,4,12,37,36,25,-2,10,15,25};
    // int min=A[0];
    
    
    // for(auto i : A){
    //     if(min > i){
    //         min = i;
    //     }
    // }
    // //write a loop to find minimum number
    
    // cout<<min;
    
    
    // FOR MAXIMUM number in an array
    int A[]={8,4,12,37,36,25,-2,10,15,25};
    int max=A[0];
    
    
    for(auto i : A){
        if(max < i){
            max = i;
        }
    }
    //write a loop to find minimum number
    
    cout<<max;
    return 0;
}