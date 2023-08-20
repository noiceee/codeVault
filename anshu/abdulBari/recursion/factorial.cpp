#include <iostream>
using namespace std;

int factorial(int num) {
  int fact = 1;
  if (num < 0) {
    return -1;
  } else if (num == 0 || num == 1) {
    fact = 1;
  } else {
    fact = factorial(num - 1) * num;
  }

  return fact;
}

int main() {
  int num;
  cout << "Num: ";
  cin >> num;
  cout << factorial(num);
}