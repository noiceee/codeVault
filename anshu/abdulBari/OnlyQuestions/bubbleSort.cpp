#include<iostream>
using namespace std ; 

void swap(int &a , int &b){
    a = a+b ; 
    b = a-b;
    a = a-b ; 
}
void bubble(int A[] , int n){
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<n-1-i ; j++){
            if(A[j]>A[j+1]){
                swap(A[j] , A[j+1]);
            }
        }
    }
    for(int i=0 ; i<n ; i++){
    cout<<A[i];
    } 
}

int main(){
    int n ;
    cout<<"Enter size: "; 
    cin>>n;
    cout<<"enter array";
    int a[n];
    for(int i=0 ; i<n ; i++){
        cout<<"enter: ";
        cin>>a[i];
    }
    bubble(a , n);
}