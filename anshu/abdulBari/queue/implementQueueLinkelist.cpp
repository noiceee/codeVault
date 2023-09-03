#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
};
Node *front = new Node;
Node *rear = new Node;

void enqueue(int x) {
  Node *t = new Node;
  if (t == nullptr) {
    cout << "Queue is full";
  } else {
    t->data = x;
    t->next = nullptr;
    if (front == nullptr)
      front = rear = t;
    else {
      rear->next = t;
      rear = t;
    }
  }
}

int dequeue() {
  int x = -1;
  Node *p;
  if (front == NULL) {
    cout << "Queue is Empty";
  } else {
    p = front;
    front = front->next;
    x = p->data;
    delete p;
  }

  return x;
}