#include <iostream>

using namespace std;

void towerOH(int n, int a, int b, int c) {
  if (n > 0) {
    towerOH(n - 1, a, c, b);
    cout << "from " << a << " to " << c<<"\n";
    towerOH(n - 1, b, a, c);
  }
}

int main() {
  int n;
  cout << "N = no. of disks\nA = 1st pole with all disks\nB = 2nd pole "
          "auxillary pole\nC = 3rd Pole\n";
  cout << "N: ";
  cin >> n;
  towerOH(n, 1, 2, 3);
}