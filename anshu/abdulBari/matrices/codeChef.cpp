#include <iostream>
using namespace std;

int main() {
  // your code goes here
  int t;
  cin >> t;
  while (t--) {
    int n, h, res, sum = 0;
    cin >> n >> h;
    int *arr = new int[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
      sum = sum + arr[i];
    }

    if (h - sum >= 0) {
      res = 0;
    } else {
      for (int i = 0; i < n; i++) {

        if (h >= arr[i]) {
          h = h - arr[i];
          continue;
        } else {
          res = h;
          break;
        }
      }
    }

    cout << res << endl;
  }
  return 0;
}
