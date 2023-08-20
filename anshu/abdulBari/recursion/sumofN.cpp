#include <iostream>
using namespace std;

int sumN(int num) {
  int sum = 0;
  if (num <= 0) {
    return -1;
  } else if (num == 1) {
    sum = 1;
  } else {
    sum = sumN(num - 1) + num;
  }
  return sum;
}

int main() {
  int num;
  cout << "Num: ";
  cin >> num;
  cout << sumN(num);
}