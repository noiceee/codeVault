#include <iostream>

using namespace std;

int abs(int n){
    if(n >= 0){
        return n;
    } else {
        return n * -1;
    }
}

int main(){
    int t; cin>>t;
    while(t--){
        int a, b, p, q; cin>>a>>b>>p>>q;
        if (!(p % a) && !(q % b)){
            if(abs(p / a - q / b) <= 1){
                cout << "YES\n";
                continue;
            }
        }
        cout << "NO\n";
    }
    return 0;
}