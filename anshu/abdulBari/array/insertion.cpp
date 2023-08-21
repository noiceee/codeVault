#include <iostream>

using namespace std;

// insert at tail
void insertAtTail(int *arr, int num, int &size, int &len) {
  if (len >= size) {
    size *= 2;
  }
  arr[len] = num;
  len++;
  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
}

// insert at head
void insertAtHead(int *arr, int num, int &size, int &len) {
  if (len >= size) {
    size *= 2;
  }
  len++;
  for (int i = len - 1; i > 0; i--) {
    arr[i] = arr[i - 1];
  }
  arr[0] = num;
  for (int i = 0; i < len; i++) {
    cout << arr[i] << " ";
  }
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
  insertAtTail(arr, n, size, len);
  cout << "\n";
  insertAtHead(arr, n, size, len);
}