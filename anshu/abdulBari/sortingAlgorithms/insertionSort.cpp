#include <iostream>
using namespace std;

void insertionSort(int *arr, int &n) {
  for (int i = 1; i < n; i++) {
    int j = i - 1;
    int x = arr[i];

    while (arr[j] > x && j > -1) {
      arr[j + 1] = arr[j];
      j--;
    }
    arr[j + 1] = x;
  }
}

int main() {
  int size;
  int *arr = new int[size];

  cout << "Size: ";
  cin >> size;

  for (int i = 0; i < size; i++) {
    cout << "arr [" << i << "] : ";
    cin >> arr[i];
  }
  insertionSort(arr, size);
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}