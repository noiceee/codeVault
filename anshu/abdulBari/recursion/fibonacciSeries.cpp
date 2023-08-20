#include <iostream>

using namespace std;

// recursion
int fiboR(int num) {
  if (num <= 1) {
    return num;
  }
  return fiboR(num - 2) + fiboR(num - 1);
}

// iteration
int fiboI(int num) {
  int t0 = 0, t1 = 1, sum = 0;
  if (num <= 1) {
    return num;
  }
  for (int i = 2; i <= num; i++) {
    sum = t0 + t1;
    t0 = t1;
    t1 = sum;
  }
  return sum;
}

int main() {
  int num;
  cout << "[ Nth term ] Num: ";
  cin >> num;
  cout << "\n";
  cout << fiboR(num);
  cout << "\n";
  cout << fiboI(num);
}