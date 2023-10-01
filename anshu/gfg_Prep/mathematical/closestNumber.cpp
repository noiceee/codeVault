// Given non-zero two integers N and M. The problem is to find the number closest to N and divisible by M. If there are more than one such number, then output the one having maximum absolute value.

#include <iostream>
using namespace std ; 

int main(){
    int n , m ;
    cin>> n >> m ;
    for(int i=0 ; i<n ; i++){
        if((n-i)%m==0){
            cout<<n-i;
            break;
        }
    }
}