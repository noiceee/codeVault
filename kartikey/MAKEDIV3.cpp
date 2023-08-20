#include <iostream>

using namespace std;

int main(){
    int t; cin >>t;
    while(t--){
        int n; cin>>n;
        cout << 3;
        while(n > 2) {
            cout << 0;
            n--;
        }
        if (n != 1){
            cout << 3 << "\n";
        } else {
            cout << "\n";
        }
    }
    return 0;
}