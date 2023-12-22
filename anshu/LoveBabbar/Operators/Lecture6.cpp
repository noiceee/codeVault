#include<iostream>
#include<math.h>
using namespace std ;

// print binary form of N
int main(){
    int n ; 
    cin>>n ; 

    int ans = 0 ;
    int i = 0 ;
    while(n!=0){
        int digit = n & 1; 
        ans = (digit *pow(10,i)) + ans ; 
    }
}