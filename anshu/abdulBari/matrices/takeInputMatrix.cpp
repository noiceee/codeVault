#include <iostream>
#include <vector>
using namespace std;

void display(vector<vector<int>> mat, int row, int col) {
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      cout << mat[i][j];
    }
    cout << "\n";
  }
}
int main() {
  int row, col, val;
  cout << "enter row: ";
  cin >> row;
  cout << "enter col: ";
  cin >> col;
  vector<vector<int>> arr;

  for (int i = 0; i < row; i++) {
    vector<int> val1;
    for (int j = 0; j < col; j++) {
      cout << "enter val[" << i << "][" << j << "] : ";
      cin >> val;
      val1.push_back(val);
    }
    arr.push_back(val1);
  }

  display(arr, row, col);
}