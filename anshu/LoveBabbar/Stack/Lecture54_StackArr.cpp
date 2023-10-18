// Implementation of Stack using Class

// Array
#include <iostream>
using namespace std;

class stack {
  // properties
  int top;
  int *arr;
  int size;

public:
  stack(int size) {
    this->size = size;
    top = -1;
    arr = new int[size];
  }
  void push(int val);
  void pop();
  int peek();
  bool isempty();
};

bool stack::isempty() {
  if (top == -1) {
    return true;
  } else {
    return false;
  }
}

void stack::push(int val) {
  if (size - top > 1) {
    top++;
    arr[top] = val;
  } else {
    cout << "Error: Stack Overflow" << endl;
  }
}

void stack::pop() {
  if (top == -1) {
    cout << "Error: Stack Underflow" << endl;
  } else {
    top--;
  }
}

int stack::peek() {
  if (top == -1) {
    cout << "Error: Stack Underflow" << endl;
  }
  return arr[top];
}

int main() {
  int size;
  cout << "Enter stack size: ";
  cin >> size;
  stack st(size);

  st.push(10);
  st.push(1);
  st.push(20);
  st.push(30);
  cout << "Top: " << st.peek();
}