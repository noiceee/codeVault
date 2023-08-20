#include <iostream>
using namespace std;
int pow(int n, int m) {
  int ans = 1;
  if (n == 1 || m == 0) {
    ans = 1;
  } else {
    ans = pow(n, m - 1) * n;
  }
  return ans;
}

int main() {
  int n, m;
  cout << "pow(a , b) = a^b\n";
  cout << "enter a : ";
  cin >> n;
  cout << "enter b : ";
  cin >> m;
  cout << pow(n, m);
}