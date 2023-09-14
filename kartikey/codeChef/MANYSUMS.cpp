#include <iostream>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int l, r; cin>>l; cin>>r;
        cout << (r - l) * 2 + 1 << "\n";
    }
    return 0;
}