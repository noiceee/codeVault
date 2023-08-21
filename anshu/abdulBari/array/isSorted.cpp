#include <iostream>
using namespace std;

// isSorted
void isSorted(int *arr, int len) {
  bool flag = true;
  for (int i = 0; i < len - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      flag = !flag;
      break;
    }
  }
  cout << flag;
}

int main() {
  int size, len;
  cout << "Size: ";
  cin >> size;
  cout << "Length: ";
  cin >> len;

  int *arr = new int[size];

  for (int i = 0; i < len; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }

  isSorted(arr, len);
}