#include <iostream>

using namespace std;

double eVal(int x, int n) {
  static double p = 1, f = 1;
  double ans;
  double r;
  if (n == 0)
    ans = 1;
  else {
    r = eVal(x, n - 1);
    p = p * x;
    f = f * n;
    ans = r + p / f;
  }
  return ans;
}

int main() {
  int x, n;
  cout << "e^x - nth term\n";
  cout << "enter x: ";
  cin >> x;
  cout << "enter n: ";
  cin >> n;
  cout << eVal(x, n);
}