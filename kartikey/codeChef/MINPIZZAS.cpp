#include <iostream>

using namespace std;

int gcd(int a, int b){
    while(b % a){
        int temp = a;
        a = b%a;
        b = temp;
    }
    return a;
}

int lcm(int a, int b){
    return a / gcd(a, b) * b;
}

int main(){
    int t; cin>>t;
    while(t--){
        int n; int k;
        cin>>n; cin>>k;
        cout << lcm(n, k)/k <<"\n";
    }
    return 0;
}