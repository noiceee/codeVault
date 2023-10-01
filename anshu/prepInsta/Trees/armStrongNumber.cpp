#include<iostream>
using namespace std ; 

int main(){
    int num=0 ,i=1, sum, n=0 ; 
    int val ; 
    cout<<"enter value: ";
    cin>>val ; 
    do{
        num=i;
        sum = 0 ;
        while(num>0){
            n = num%10;
            num=num/10;
            sum = sum + (n*n*n);
        }
        if(sum==i){
            cout<<i<<endl;
        }
        i++;
    }while(i<=val);
}