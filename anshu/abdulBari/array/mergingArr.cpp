#include <iostream>
using namespace std;

// merge sorted arrays 
void mergeArr(int *arr1, int *arr2, int size1, int size2) {
  int size = size1 + size2 - 1;
  int *arr3 = new int[size];
  int i = 0, j = 0, k = 0;
  while (k < size) {
    if (arr1[i] < arr2[j]) {
      arr3[k++] = arr1[i++];
    } else {
      arr3[k++] = arr2[j++];
    }
  }

  for (int i = 0; i < size; i++) {
    cout << arr3[i] << " ";
  }
}

int main() {
  int size1, size2;
  cout << "Size of Arr 1: ";
  cin >> size1;
  cout << "Size of Arr 2: ";
  cin >> size2;

  int *arr1 = new int[size1];
  int *arr2 = new int[size2];

  cout << "For arr1 ->\n";
  for (int i = 0; i < size1; i++) {
    cout << "enter: ";
    cin >> arr1[i];
  }

  cout << "For arr2 ->\n";
  for (int i = 0; i < size2; i++) {
    cout << "enter: ";
    cin >> arr2[i];
  }

  mergeArr(arr1, arr2, size1, size2);
}