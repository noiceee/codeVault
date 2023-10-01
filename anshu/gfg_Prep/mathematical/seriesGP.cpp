// Given the A and R i,e first term and common ratio of a GP series. Find the
// Nth term of the series
/* an= nth term

a1=first term
r=common ratio
n=term position  */

#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int a, r, n;
  cin >> a >> r >> n;
  cout << a * pow(r, n - 1);
}