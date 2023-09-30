#include<iostream>

using namespace std ; 

int main(){
    int n ; cout<<"enter: ";
    cin>>n ; 
    int revNum=0 ; 
    int temp=n ; 
    while(temp>0){
        int lastDigi = temp%10 ; 
        revNum = (10*revNum)+ lastDigi ; 
        temp = temp/10;
    }

    cout<<"Reverse: "<<revNum;
}