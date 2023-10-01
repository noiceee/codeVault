#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n*(n-i); j++){
            cout << n - j/(n-i);
        }
        cout << "\n";
    }
    return 0;
}