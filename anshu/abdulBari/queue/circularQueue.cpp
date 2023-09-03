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
  if ((q->rear + 1) % q->size == q->front) {
    cout << "Queue is full";
  } else {
    q->rear = (q->rear + 1) % q->size;
    q->Q[q->rear] = x;
  }
}

void dequeue(Queue *q) {
  int x = -1;
  if (q->front == q->rear) {
    cout << "Queue is empty";
  } else {
    q->front = (q->front + 1) % q->size;
    x = q->Q[q->front];
  }
}

int main() {
  Queue q;
  cout << "Enter size";
  cin >> q.size;
  q.Q = new int[q.size];
  for (int i = 0; i < q.size; i++) {
    cout << "val [" << i << "] : ";
    cin >> q.Q[i];
  }
}