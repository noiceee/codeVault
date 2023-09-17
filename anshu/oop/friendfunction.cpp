#include <iostream>
using namespace std;

class Complex {
  int a, b;

public:
  void setData(int o1, int o2) {
    a = o1;
    b = o2;
  }
  friend Complex sumComplex(Complex o1, Complex o2);
  void printData() { cout << "Number: " << a << " + " << b << "i" << endl; }
};

Complex sumComplex(Complex o1, Complex o2) {
  Complex o3;
  o3.setData((o1.a + o2.a), (o1.b + o2.b));
  return o3;
}

int main() {
  Complex num;
  int n1, n2;
  cout << "Enter real: ";
  cin >> n1;
  cout << "Enter imaginary: ";
  cin >> n2;

  num.setData(n1, n2);
  num.printData();
}