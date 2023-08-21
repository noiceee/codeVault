// get set max min sum avg

#include <iostream>
using namespace std;

// Get
void get(int *arr, int index, int len) {
  if (index >= 0 && index < len) {
    cout << arr[index];
  }
  cout << "Invalid Index";
}

// Set
void set(int *arr, int index, int len, int num) {
  if (index >= 0 && index < len) {
    arr[index] = num;
  }
}

// Max
void max(int *arr, int len) {
  int maxi = arr[0];
  for (int i = 1; i < len; i++) {
    if (arr[i] > maxi) {
      maxi = arr[i];
    }
  }
  cout << "Maximum is: " << maxi;
}

// Min
void min(int *arr, int len) {
  int mini = arr[0];
  for (int i = 1; i < len; i++) {
    if (arr[i] < mini) {
      mini = arr[i];
    }
  }
  cout << "Minimun is: " << mini;
}

// Sum
void sum(int *arr, int len) {
  int sum = 0;
  for (int i = 0; i < len; i++) {
    sum = sum + arr[i];
  }
  cout << "Sum: " << sum;
}

// avg
void avg(int *arr, int len) {
  int sum = 0;
  int count = 0;
  for (int i = 0; i < len; i++) {
    sum = sum + arr[i];
    count++;
  }
  cout << "Avg: " << sum / count;
}

int main() {
  int size, len, index;
  cout << "Size: ";
  cin >> size;
  cout << "Length: ";
  cin >> len;

  int *arr = new int[size];

  for (int i = 0; i < len; i++) {
    cout << "enter: ";
    cin >> arr[i];
  }

  cout << "Get index (i): ";
  cin >> index;
  get(arr, index, len);
  cout << "Get index (i): ";
}