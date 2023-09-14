#include <iostream>

using namespace std;

// taylor's series { iterative method }
double eVali(int x, int n) {
  int s = 1;
  for (; n > 0; n--) {
    s = 1 + x / n * s;
  }
  return s;
}

// taylor's series { iterative method }
int eValr(int x, int n) {
  static int s = 1;
  if (n == 0)
    return s;
  else {
    s = 1 + x / n * s;
  }
  return eValr(x, n - 1);
}

int main() {
  int x, n;
  cout << "e^x - nth term\n";
  cout << "enter x: ";
  cin >> x;
  cout << "enter n: ";
  cin >> n;
  cout << eVali(x, n) << "\n";
  cout << eVali(x, n);
}