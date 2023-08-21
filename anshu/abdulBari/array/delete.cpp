#include <iostream>
using namespace std;

// delete element
void deleteArr(int *arr, int index, int &size, int &len) {
  int x;
  if (len >= size) {
    size *= 2;
  }
  x = arr[index];
  for (int i = index; i < len - 1; i++) {
    arr[i] = arr[i + 1];
  }
  len--;

  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int size, len, index;
  cout << "size of Arr: ";
  cin >> size;
  cout << "length of Arr: ";
  cin >> len;
  cout << "Index: ";
  cin >> index;
  int *arr = new int[size];

  for (int i = 0; i < len; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }
  deleteArr(arr, index, size, len);
}