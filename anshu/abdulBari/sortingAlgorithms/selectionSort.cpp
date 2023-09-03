#include <iostream>
using namespace std;

void selectionSort(int *arr, int &n) {
  int temp;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i, k = i + 1; j < n; j++) {
      if (arr[j] < arr[k]) {
        k = j;
        temp = arr[k];
        arr[k] = arr[i];
        arr[i] = temp;
      }
    }
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

  selectionSort(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}