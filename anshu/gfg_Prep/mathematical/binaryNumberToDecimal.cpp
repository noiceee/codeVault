#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int binaryToDeci(string str) {
  int res = 0, index = 0;

  for (int i = str.length() - 1; i >= 0; i--) {
    if (str[i] == '1') {
      res = res + pow(2, index);
    }
    index++;
  }
  return res;
}

int main() {
  string str;
  cout << "Enter Binary Number: ";
  cin >> str;
  cout << "Decimal form: " << binaryToDeci(str);
}