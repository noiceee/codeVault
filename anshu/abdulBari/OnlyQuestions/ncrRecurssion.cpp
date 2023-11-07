#include <iostream>
using namespace std;

// factorial
int fact(int n) {
  if (n == 0 || n == 1) {
    return 1;
  }
  return fact(n - 1) * n;
}

// nCr = n! / r! (n-r)!
int nCr(int n, int r) {
  int t1 = fact(n);
  int t2 = fact(n - r);
  int t3 = fact(r);
  return (t1 / (t2 * t3));
}

// pascal's traingle
int pascal(int n, int r) {
  if (r == 0 || n == r) {
    return 1;
  } else {
    return pascal(n - 1, r - 1) + pascal(n - 1, r);
  }
}