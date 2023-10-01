#include <bits/stdc++.h>

using namespace std;

int ceil(float a){
    if(a == a/1){
        return a;
    } else {
        return a/1 + 1;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // All the best, start down here!
    int t; cin>>t;
    while(t--){
        float l, v1, v2;
        cin >> l >> v1 >> v2;
        int t1 = ceil(1.0 * l/v1);
        int t2 = ceil(1.0 * l/v2);
        if (t2 > t1) {
            cout << -1 <<'\n';
        } else if (t2 == t1) {
            cout << -1 << '\n';
        } else {
            cout << t1 - t2 - 1 << '\n';
        }
    }
    return 0;
}