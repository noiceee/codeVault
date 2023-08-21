#include <iostream>

using namespace std;

void reverse(int *arr, int len) {
  for (int i = 0, j = len - 1; i < len / 2; i++, j--) {
    int temp;
    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
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

  reverse(arr, len);
}