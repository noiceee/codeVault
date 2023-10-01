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


int main(){
    
}