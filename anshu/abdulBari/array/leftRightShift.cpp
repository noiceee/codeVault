#include <iostream>
using namespace std;

// left shift
void leftShift(int *arr, int len, int n) {
  for (int i = n; i < len; i++) {
    cout << arr[i] << " ";
  }
}

// right shift
void rightShift(int *arr, int len, int n) {
  for (int i = 0; i < len - n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int size, len, n;
  cout << "Size: ";
  cin >> size;
  cout << "Length: ";
  cin >> len;

  int *arr = new int[size];

  for (int i = 0; i < len; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }
  cout << "N: ";
  cin >> n;
  leftShift(arr, len, n);
  cout << "\n";
  rightShift(arr, len, n);
}