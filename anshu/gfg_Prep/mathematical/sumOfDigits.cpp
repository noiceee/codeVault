#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "enter num: ";
  cin >> n;

  int sum = 0, temp = n;

  while (temp > 0) {
    sum = sum + temp % 10;
    temp = temp / 10;
  }

  cout << "Sum is : " << sum;
}