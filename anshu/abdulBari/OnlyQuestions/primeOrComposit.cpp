#include <iostream>
using namespace std ; 

bool primeON(int n){
    if(n<=1){
        return false;
    }

    for(int i=2 ; i<= n/2 ; i++){
        if(n%i==0){
            return false;
        }
    }
    return true ; 
}

int main(){
    int n ; 
    cout<<"enter a number: ";
    cin>>n ; 
    if(primeON(n)){
        cout<<"Prime";
    }
    else{
        cout<<"Composite";
    }
}