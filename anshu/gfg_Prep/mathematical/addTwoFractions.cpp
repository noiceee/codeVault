#include <iostream>
using namespace std;

int gcd(int a, int b) {
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int lcm(int a, int b) {
  int valLcm = (a * b) / gcd(a, b);
  return valLcm;
}

void addFractions(int num1, int den1, int num2, int den2) {
  int den3 = lcm(den1, den2);
  int num3 = (num1 * (den3 / den1)) + (num1 * (den3 / den1));

  // reducing the fraction to it's lowest form
  int ansDen = den3 / gcd(num3, den3);
  int ansNum = num3 / gcd(num3, den3);
  cout << "den3: " << den3 << endl;
  cout << "gdc: " << gcd(den3, num3) << endl;
  cout << "The required fraction is : " << ansNum << "/" << ansDen;
}

int main() {
  int num1, den1, num2, den2;
  cout << "enter numerator 1: ";
  cin >> num1;
  cout << "enter denominator 1: ";
  cin >> den1;
  cout << "enter numerator 2: ";
  cin >> num2;
  cout << "enter denominator 2: ";
  cin >> den2;

  addFractions(num1, den1, num2, den2);
}