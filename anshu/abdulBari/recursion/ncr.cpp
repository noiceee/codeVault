#include <iostream>
using namespace std;

int fact(int num) {
  if (num == 0 || num == 1) {
    return 1;
  }
  return fact(num - 1) * num;
}

int C(int n, int r) {
  int t1, t2, t3;
  t1 = fact(n);
  t2 = fact(r);
  t3 = fact(n - 1);

  return t1 / (t2 * t3);
}

int main() {
  int n, r;
  cout << "nCr = n! / r! * ( n -r )!\n";
  cout << "n: ";
  cin >> n;
  cout << "r: ";
  cin >> r;
  cout << "ans: " << C(n, r);
}