#include <iostream>
using namespace std;

class sNode {
  int data;
  int top;
  sNode *next;

public: 

  void push(int val);
  void pop();
  void peek();
  void isempty();

};
sNode *top = NULL;
void sNode::push(int val){
    sNode *temp = new sNode ;
    temp->data = val;
    temp->next = top;
  

}

int main() { int }