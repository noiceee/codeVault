#include <iostream>
using namespace std;

void sumK(int *arr, int size, int sum) {
  for (int i = 0; i < size - 1; i++) {
    for (int j = i + 1; j < size; j++) {
      if (arr[i] + arr[j] == sum) {
        cout << i << " " << j << "\n";
      }
    }
  }
}

// sum of 2 elements using Hashing
void sumKH(int *arr, int size, int sum) {
  int sizeH = arr[size - 1];
  int *arrH = new int[sizeH]{0};

  for (int i = 0; i < sizeH; i++) {
    if (arrH[sum - arr[i]] != 0) {
      cout << arr[i] << sum - arr[i] << " ";
    }
    arrH[arr[i]]++;
  }
}

int main() {
  int size, sum;

  cout << "Size: ";
  cin >> size;
  cout << "sum: ";
  cin >> sum;

  int *arr = new int[size];

  for (int i = 0; i < size; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }

  sumKH(arr, size, sum);
}