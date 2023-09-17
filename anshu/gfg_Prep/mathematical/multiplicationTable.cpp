// Create the multiplication table of a given number N and return the table as
// an array.

#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> table;
  int n;
  cin >> n;
  for (int i = 1; i <= 10; i++) {
    table.push_back(i * n);
  }
  for (int i = 0; i < table.size(); i++) {
    cout << table[i] << " ";
  }
}