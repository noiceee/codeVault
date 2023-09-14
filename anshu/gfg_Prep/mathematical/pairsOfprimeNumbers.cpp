// Find all pairs (sets) of prime numbers (p,q) such that p*q <= n, where n is
// given number.
#include <iostream>
#include <vector>
using namespace std;

void pairPrime(int n) {
  vector<int> prime = {0};
  for (int i = 2; i < n; i++) {
    if (prime[i] == 0) {
      for (int j = i * i; j <= n; j += i) {
        prime[i] = 1;
      }
    }
  }

  for (int i = 2; i <= n; i++) {
    if (prime[i] == 0) {
      cout << i << " ";
    }
  }
  cout << endl;
}
int main() {
  int n;
  cout << "Enter num: ";
  cin >> n;
}