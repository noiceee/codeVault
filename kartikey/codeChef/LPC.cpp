#include <bits/stdc++.h>

using namespace std;

int difference(int a, int b){
    if (a > b){
        return a-b;
    } else {
        return b-a;
    }
}

int diffAns(int a){
    if(a > 5){
        return (10-a);
    } else {
        return (a);
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // All the best, start down here!
    int t; cin>>t;
    while(t--){
        int n, m; cin>>n; cin>>m;
        char* arr = new char[n];
        int ans = INT32_MAX;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        char* k = new char[m]; //k ka length is m
        for(int i=0; i<m; i++){
            cin >> k[i];
        }
        
        for(int i=0; i<n-m+1; i++){
            int sum = 0;
            for(int j=0; j<m; j++){
                sum += diffAns(difference(arr[i + j], k[j]));
            }
            // cout << "Sum : " << sum << "\n";
            if (ans >= sum) {
                ans = sum;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}