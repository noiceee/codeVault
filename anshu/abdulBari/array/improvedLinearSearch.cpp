#include <iostream>

using namespace std;

// Transposition [ key element moves on step closer to head ]
void linearSearchT(int *arr, int num, int &len) {
  int temp;
  for (int i = 0; i < len; i++) {
    if (arr[i] == num) {
      cout << "Index: " << i;
      temp = arr[i];
      arr[i] = arr[i - 1];
      arr[i - 1] = temp;
      break;
    }
  }
}

// Move to head [ key element becomes head ]
void linearSearchH(int *arr, int num, int &len) {
  int temp;
  for (int i = 0; i < len; i++) {
    if (arr[i] == num) {
      cout << "Index: " << i;
      temp = arr[i];
      arr[i] = arr[0];
      arr[0] = temp;
      break;
    }
  }
}

int main() {
  int size, len, num;
  cout << "Size: ";
  cin >> size;
  cout << "Length: ";
  cin >> len;

  int *arr = new int[size];

  for (int i = 0; i < len; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }

  cout << "Num to Search: ";
  cin >> num;

  linearSearchT(arr, num, len);
}