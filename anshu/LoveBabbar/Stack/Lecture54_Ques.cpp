// Two Stack In an array

#include <iostream>
using namespace std;

class doubleStack {
  int size;
  int *arr;
  int top1;
  int top2;

public:
  doubleStack(int val) {
    this->size = val;
    arr = new int[size];
    top1 = -1;
    top2 = size;
  }

  void push(int val, int stackNo) {
    if (top2 - top1 == 1) {
      cout << "Error: StackOverFlow" << endl;
    } else {
      if (stackNo == 1) {
        top1++;
        arr[top1] = val;

      } else if (stackNo == 2) {
        top2--;
        arr[top2] = val;

      } else {
        cout << "Unkown Stack " << endl;
      }
    }
  }

  void pop(int stackNo) {
    if (top1 == -1 && top2 == size) {
      cout << "Error: StackUnderFlow" << endl;
    } else {
      if (stackNo == 1) {
        top1--;
      } else if (stackNo == 2) {
        top2++;
      } else {
        cout << "Unkown Stack " << endl;
      }
    }
  }

  void isempty(int stackNo) {
    if (stackNo == 1 || stackNo == 2) {
      if (stackNo == 1 && top1 == -1) {
        cout << "true";
      } else if (stackNo == 2 && top2 == size) {
        cout << "true" << endl;
      } else {
        cout << "false" << endl;
      }
    } else {
      cout << "Unkown Stack " << endl;
    }
  }

  void peek(int stackNo) {
    if (stackNo <= 1 && stackNo >= 2) {
      cout << "Unkown Stack " << endl;
    } else {
      if (stackNo == 1 && top1 > -1) {
        cout << arr[top1];
      } else if (stackNo == 2 && top2 < size) {
        cout << arr[top2];
      }
    }
  }
};

int main() {
  int size;
  cout << "enter size : ";
  cin >> size;

  doubleStack ds(size);
  ds.push(9, 1);
  ds.push(3, 2);
  ds.push(4, 1);
  ds.push(5, 2);
  ds.push(7, 2);
  ds.peek(2);
  ds.pop(1);
  ds.pop(1);
  ds.peek(1);
  ds.isempty(1);
}