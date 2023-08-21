#include <iostream>

using namespace std;

// Single missing number
void singleM(int *arr, int size) {
  int diff = arr[0] - 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] - i != diff) {
      cout << "Single missing number is: " << arr[i] - i;
      break;
    }
  }
}

// Multiple missing numbers
void multipleM(int *arr, int size) {
  int diff = arr[0] - 0;
  for (int i = 0; i < size; i++) {
    if (arr[i] - i != diff) {
      while (diff < arr[i] - i) {
        cout << i + diff << " ";
        diff++;
      }
    }
  }
}

int main() {
  int size, len;
  cout << "size of Arr: ";
  cin >> size;

  int *arr = new int[size];

  for (int i = 0; i < size; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }
  //   singleM(arr, size);
  cout << "\n";
  multipleM(arr, size);
}