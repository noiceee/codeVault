#include <iostream>
using namespace std;

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
}