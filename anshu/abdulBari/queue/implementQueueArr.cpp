// operations in queue
// enqueue
// dequeue
// isEmpty
// isFull
// first
// last

#include <iostream>
using namespace std;

class Queue {
public:
  int size;
  int front;
  int rear;
  int *Q;
};

void enqueue(Queue *q, int x) {
  if (q->rear == q->size - 1) {
    cout << "Queue is full";
  }

  else {
    q->rear++;
    q->Q[q->rear] = x;
  }
}

void dequeue(Queue *q) {
  int x = -1;
  if (q->rear == q->front) {
    cout << "Queue is empty";
  }

  else {
    q->front++;
    x = q->Q[q->front];
  }
}

int main() {
  Queue q;
  cout << "Enter Queue size: ";
  cin >> q.size;
  q.Q = new int[q.size];
  q.front = q.rear = -1;
}
