#include <iostream>

using namespace std;

// duplicate
void duplicate(int *arr, int size) {
  int dupli = -1;
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] == arr[i + 1] && arr[i] != dupli) {
      cout << arr[i] << " ";
      dupli = arr[i];
    }
  }
}

// duplicate with hashing
void duplicateH(int *arr, int size) {
  int sizeH = arr[size - 1];
  int *arrH = new int[sizeH]{0};
  for (int i = 0; i < size; i++) {
    arrH[arr[i]]++;
  }

  for (int i = 0; i < sizeH; i++) {
    if (arrH[i] > 1) {
      cout << i << " ";
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

  duplicateH(arr, size);
}