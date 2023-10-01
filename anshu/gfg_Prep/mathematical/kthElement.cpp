#include<iostream>
#include<math.h>
using namespace std ; 

int main(){
    int a , b, k , i=1, ans; 
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    cout<<"Enter K: ";
    cin>>k;
    int num = pow(a,b);
    int temp = num ; 
    while(temp>0 && i<=k){
        ans = temp%10;
        temp = temp/10;
        i++;
    }

    cout<<"answer: " <<ans ; 
}