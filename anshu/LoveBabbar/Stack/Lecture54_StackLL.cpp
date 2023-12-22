#include <iostream>
using namespace std;

class sNode {
public:
  int data;
  sNode *next;
  sNode *top ;

  void push(int val);
  void pop();
  void peek();
  void isempty();

  sNode(){
      top->data = -1;
      top->next = NULL;
  }

};

void sNode::push(int val) {
  sNode *temp = new sNode;
  temp->data = val;
  temp->next = NULL;
  top->next = temp;
}
void sNode::peek() {
  cout<<top->data<<endl ; 
}

int main() {
  sNode stack ; 
  stack.push(10);
  stack.push(20);
  stack.push(30);
  stack.peek();
}