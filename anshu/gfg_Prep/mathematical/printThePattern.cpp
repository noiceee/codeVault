// You are given a number N. You need to print the pattern for the given value
// of N.
/*
For N = 2 the pattern will be
2 2 1 1
2 1

For N = 3 the pattern will be
3 3 3 2 2 2 1 1 1
3 3 2 2 1 1
3 2 1
*/

// #include <iostream>
// using namespace std;

// int main() {
//   int n;
//   cin >> n;
//   for (int i = n; i >= 1; i--) {
//     for(int j=n;j>=i;j--){
//         for(int k=1 ; k<=i ; k++){
//             cout<<k<<" ";
//         }
//     }
//     cout<<endl;
//   }
// }

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n*(n-i); j++){
            cout << n - j/(n-i);
        }
        cout << "\n";
    }
    return 0;
}