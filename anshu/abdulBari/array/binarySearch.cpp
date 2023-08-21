#include <iostream>

using namespace std;

// iterative method
int binarySearchI(int *arr, int len, int num) {
  int low = 0, high = len - 1, mid;
  while (low <= high) {
    mid = low + (high - low) / 2;
    if (num == arr[mid]) {
      return mid;
    } else if (arr[mid] > num) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

int main() {
  int size, len, n;
  cout << "size of Arr: ";
  cin >> size;
  cout << "length of Arr: ";
  cin >> len;
  cout << "Num: ";
  cin >> n;
  int *arr = new int[size];

  for (int i = 0; i < len; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }
  cout << "Index: " << binarySearchI(arr, len, n);
}