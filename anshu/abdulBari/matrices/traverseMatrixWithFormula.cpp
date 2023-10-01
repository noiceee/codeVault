#include <iostream>
using namespace std;

int main() {
  int rows, cols;
  cout << "Enter row: ";
  cin >> rows;
  cout << "Enter col: ";
  cin >> cols;
  int matrix[rows][cols];

  cout << "Enter Matrix -->\n";
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      cout << "val[" << i << "][" << j << "] : ";
      cin >> matrix[i][j];
    }
  }
  cout << "\n";

  // pointer for first value ;
  int *base_ptr = &matrix[0][0];
  // traverse with base_ptr
  for (int i = 0; i < rows * cols; i++) {
    cout << *base_ptr + i << " ";
  }
}