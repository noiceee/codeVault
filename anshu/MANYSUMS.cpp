#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t > 0) {
    int l, r, diff;
    cin >> l >> r;
    diff = r - l;
    if (diff == 0) {
      cout << 1 << "\n";
    } else {
      cout << 2 * diff + 1 << "\n";
    }

    t--;
  }
  return 0;
}