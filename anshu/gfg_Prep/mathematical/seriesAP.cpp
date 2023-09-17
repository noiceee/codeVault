// Given the first 2 terms A1 and A2 of an Arithmetic Series.Find the Nth term
// of the series.

#include <iostream>
using namespace std;

int main() {
  int a1, a2, n;
  cin >> a1 >> a2 >> n;
  cout << a1 + (n - 1) * (a2 - a1);
}

// an = a + (n – 1)d