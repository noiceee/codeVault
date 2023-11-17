#include<iostream>
using namespace std ; 
void sumK(int *a , int k , int n){
    for(int i=0 ; i<n ; i++){
        for(int j=i+1; j<n ; j++){
            if(a[i]+a[j]==k){
                cout<<a[i]<<" + "<<a[j] <<endl;
            }
        }
    }
}
int main(){
    int n ; 
    cout<<"enter arr size: ";
    cin>>n;
    cout<<"Array\n";
    int arr[n];
    for(int i=0 ; i<n ;i++){
        cout<<"enter: ";
        cin>>arr[i];
    }
    int k ; 
    cout<<"enter sum needed: ";
    cin>>k;
    sumK(arr, k, n);
}