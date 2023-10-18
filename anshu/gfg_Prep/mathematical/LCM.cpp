#include <iostream>
#include <math.h>

using namespace std;

int gcd(int a, int b) {
  int ans = min(a, b);
  while (ans > 0) {
    if (a % ans == 0 && b % ans == 0) {
      break;
    }
    ans--;
  }
  return ans;
  
}

int main() {
  int a, b;
  cout << "Enter A: ";
  cin >> a;
  cout << "Enter B: ";
  cin >> b;
  int lcm = (a * b) / gcd(a, b);

  cout << "LCM : " << lcm;
}