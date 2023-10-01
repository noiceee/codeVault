#include <iostream>
using namespace std;

class Stack {
public:
  int n;
  int top;
  int *arr;
  Stack(int n) {
    this->n = n;
    top = -1;
    arr = new int[n];
  }
};

int main() {
  int size;
  cout << "Enter stack size: ";
  cin >> size;
  Stack S(size);

  // empty stack top ==-1;
  if (S.top ==  - 1){
    cout<<"Stack is empty";
  }

  if(S.top==S.n-1){
    cout<<"Stack is Full" ; 
  }
    
}