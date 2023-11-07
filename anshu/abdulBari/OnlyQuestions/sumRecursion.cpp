#include <iostream>
using namespace std;

int sum(int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  }
  return sum(n - 1) + n;
}

int main() {
  int n;
  cin >> n;
  cout << "Sum: " << sum(n);
}