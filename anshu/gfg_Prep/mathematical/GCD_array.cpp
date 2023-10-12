#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int gcdArr(int N, int arr[]) {
  int gcdN = arr[0];
  for (int i = 1; i < N; i++) {
    gcdN = gcd(arr[i], gcdN);
  }
  return gcdN;
}

int main() {
  int N;
  int arr[N];

  cout << "enter array length: ";
  cin >> N;

  cout << "Array --> " << endl;
  for (int i = 0; i < N; i++) {
    cout << "enter val: ";
    cin >> arr[i];
  }
  cout << "answer: " << gcdArr(N, arr);
}