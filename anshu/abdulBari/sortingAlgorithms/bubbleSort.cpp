#include <iostream>
using namespace std;

void bubbleSort(int *arr, int &n) {
  bool flag;
  for (int i = 0; i < n - 1; i++) {
    flag = true;
    for (int j = 0; j < n - 1 - i; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp;
        temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        flag = !flag;
      }
    }
    if (flag == true) {
      break;
    }
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int size;
  cout << "Input Size: ";
  cin >> size;
  int *arr = new int[size];

  for (int i = 0; i < size; i++) {
    cout << "arr[" << i << "]: ";
    cin >> arr[i];
  }
  bubbleSort(arr, size);
}