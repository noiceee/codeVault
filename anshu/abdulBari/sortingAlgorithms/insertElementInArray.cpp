#include <iostream>
using namespace std;

int main() {
  int len, num, size = 2 * len;
  int *arr = new int[size];

  cout << "Input Size: ";
  cin >> len;
  cout << "\nEnter Sorted Array\n";
  for (int i = 0; i < len; i++) {
    cout << "arr[" << i << "] : ";
    cin >> arr[i];
  }

  cout << "Enter Num to Insert: ";
  cin >> num;
  int i;
  for (i = 0; i < len; i++) {
    if (num < arr[i]) {
      int j = len;
      while (j > i) {
        arr[j] = arr[j - 1];
        j--;
      }
      break;
    }
  }

  arr[i] = num;

  for (int i = 0; i < len + 1; i++) {
    cout << arr[i] << " ";
  }
}