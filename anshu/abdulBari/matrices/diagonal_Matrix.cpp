#include <iostream>
using namespace std;

class diagonal {
public:
  int n;
  int *arr;

  diagonal(int n) {
    this->n = n;
    arr = new int[n];
  }

  void set(int i, int j, int x);
  int get(int i, int j);
  void display();
};

void diagonal::set(int i, int j, int x) {
  if (i == j) {
    arr[i - 1] = x;
  }
}
int diagonal::get(int i, int j) {
  if (i == j) {
    return arr[i - 1];
  }
  return 0;
}

void diagonal::display() {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i == j)
        cout << arr[i] << " ";
      else
        cout << "0 ";
    }
    cout << endl;
  }
}

int main() {
  diagonal d(4);
  d.set(1, 1, 5);
  d.set(2, 2, 8);
  d.set(3, 3, 9);
  d.set(4, 4, 12);

  d.display();
  return 0;
}