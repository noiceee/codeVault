#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
};

Node *top = NULL;

void push(int x) {
  Node *t = new Node;

  if (t == NULL) {
    cout << "stack is full";
  } else {
    t->data = x;
    t->next = top;
    top = t;
  }
}

int pop() {
  Node *t = new Node;
  int x = -1;
  if (top == NULL) {
    cout << "stack is empty ";
  } else {
    t = top;
    top = top->next;
    x = t->data;
    free(t);
  }
  return x;
}

void display() {
  Node *t = new Node;
  t = top;
  while (t != NULL) {
    cout << t->data<<" ";
    t = t->next;
  }
  cout << "\n";
}

int main() {
  push(10);
  push(20);
  push(30);

  display();

  cout << "pop: " << pop();
}