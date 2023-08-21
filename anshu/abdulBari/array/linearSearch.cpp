#include <iostream>

using namespace std;

// linear search
void linearSearch(int *arr, int num, int &len) {
  for (int i = 0; i < len; i++) {
    if (arr[i] == num) {
      cout << "Index: " << i;
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

  linearSearch(arr, num, len);
}