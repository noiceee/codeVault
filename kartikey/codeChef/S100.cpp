// #include <iostream>

// using namespace std;

// int main(){
//     int t; cin>>t;
//     while(t--){
//         int n; cin>>n;
//         char* arr = new char[n];
//         for(int i=0; i<n; i++){
//             cin >> arr[i];
//         }
//         for(int i=0; i<n-2; i++){
//             if(arr[i] == '1'){
//                 arr[i + 1] = '0';
//                 arr[i + 2] = '0';
//             }
//         }
//         for(int i=0; i<n; i++){
//             cout << arr[i];
//         }
//         cout << "\n";
//     }
//     return 0;
// }
#include <iostream>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        char* arr = new char[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int flag = 1;
        for(int i=0; i<n; i++){
            if(arr[i] == '1' && flag){
                cout << '1';
                flag = 0;
            }
            else{
                cout << '0';
            }
        }
        cout << "\n";
        delete [] arr;
    }
    return 0;
}

// #include<bits/stdc++.h>
// #define ll long long 
// #define endl "\n"
// // constant
// const int mod = 1e9+7;
// using namespace std;
 
// int main(){
//     int t;  cin>>t;
//     while(t--){
//         int n; cin>>n;
//         string s; cin>>s;
//         int pos = 0;
//         while(s[pos]!='1'){
//             pos++;
//         }
//         for(int i = n-3; i>=pos; i--){ 
//             s[i] = '1';
//             s[i+1] = '0';
//             s[i+2] = '0'; 
//         }
//         cout<<s<<endl;
//     }
//     return 0;
// }