#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int u, v, a, s; cin>>u>>v>>a>>s;
        float requiredS = (pow(v, 2) - pow(u, 2))/(-2.0)*a;
        if (s >= requiredS) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}