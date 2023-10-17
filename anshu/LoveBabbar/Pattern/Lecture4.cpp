#include <iostream>
using namespace std;

// int main(){
//     for(int i=0 ; i<4 ; i++){
//         for(int j=1 ; j<5 ; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main(){
//     for(int i=0 ; i<4 ; i++){
//         for(int j=4 ; j>0 ; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// int main() {
//   int n = 4;
//   for (int i = 1; i < n * n + 1; i++) {
//     cout << i << " ";
//     if (i % n == 0) {
//       cout << endl;
//     }
//   }
// }

// int main(){
//     int n ;
//     cout<<"enter n: ";
//     cin>>n;
//     int row =1 ;
//     while(row<=n){
//         int col=1 ;
//         while(col<=row){
//             cout<<" * ";
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1 ;
//     }
// }

// int main() {
//   int n;
//   cout << "enter n: ";
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col = 1;

//     while (col <= row) {
//       cout << row;
//       col = col + 1;
//     }
//     cout << endl;
//     row = row + 1;
//   }
// }

// int main() {
//   int n;
//   cout << "enter rows : ";
//   cin >> n;
//   int count = 1, row = 1;
//   while (row <= n) {
//     int col = 1;
//     while (col <= row) {
//       cout << count << " ";
//       count++;
//       col++;
//     }
//     cout << endl;
//     row = row + 1;
//   }
// }

// int main() {
//   int n;
//   cout << "enter rows: ";
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col = 1, val = row;
//     while (col <= row) {
//       cout << val;
//       val++;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// int main(){
//     int n; cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             cout << j + 1 + i;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// int main(){
//     int n ; cin >>n;
//     int row=1;
//     while(row<=n){
//         int col=1 , val = row;
//         while(col<=row){
//             cout<<val;
//             val--;
//             col++;
//         }
//         cout<<"\n";
//         row++;
//     }
// }

// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col = 1;
//     while (col <= n) {
//       char ch = 'A' + row - 1;
//       cout << ch;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col = 0;
//     while (col <= n - 1) {
//       char ch = 'A' + col;
//       cout << ch;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// int main() {
//   int n;
//   cin >> n;
//   int row = 1, count = 0;
//   while (row <= n) {
//     int col = 1;
//     while (col <= n) {
//       char ch = 'A' + count;
//       cout << ch;
//       count++;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col = 1;
//     int count = row;
//     while (col <= n) {
//       char ch = 'A' + count - 1;
//       cout << ch;
//       count++;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col = 1;
//     while (col <= row) {
//       char ch = 'A' + row - 1;
//       cout << ch;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col = 1;
//     int count = row;
//     while (col <= row) {
//       char ch = 'A' + count - 1;
//       cout << ch;
//       count++;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col = 1;
//     char ch = 'A' + n - row;
//     while (col <= row) {
//       cout << ch;
//       ch++;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int col = 1;
//     char ch = 'A' + row - 1;
//     while (col <= n) {
//       cout << ch;
//       ch++;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int space = n - row;
//     while (space) {
//       cout << "-";
//       space--;
//     }
//     int col = 1;
//     while (col <= row) {
//       cout << "*";
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int star = n - row;
//     while (star) {
//       cout << "*";
//       star--;
//     }
//     cout << endl;
//     row++;
//   }
//   cout << endl;
// }

// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int space = n - row;
//     while (space) {
//       cout << " ";
//       space--;
//     }
//     int col = 1;
//     while (col <= row) {
//       cout << row ;
//       col++;
//     }
//     cout << endl;
//     row++;
//   }
// }

// int main() {
//   int n;
//   cin >> n;
//   int row = 1;
//   while (row <= n) {
//     int space = n - row;
//     while (space) {
//       cout << " ";
//       space--;
//     }

//     int col = 1;
//     while (col <= row) {
//       cout << col;
//       col++;
//     }

//     int start = row - 1;
//     while (start) {
//       cout << start;
//       start--;
//     }
//     cout << endl;
//     row++;
//   }
// }

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {

    // 1st traingle
    for (int j = 1; j <= n - i; j++) {
      cout << j;
    }

    // 2nd traingle
    int start = i * 2;
    while (start) {
      cout << "*";
      start--;
    }

    // 3rd traingle
    for (int j = n; j > i; j--) {
      cout << j-i;
    }
    cout << endl;
  }
}