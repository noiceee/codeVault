#include <iostream>
using namespace std;

class node {
public:
  int data;
  node *left;
  node *right;

  node(int d) {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

node *createTree(node *root) {
  int val;
  cout << "Enter val: ";
  cin >> val;
  root = new node(val);

  if (val == -1) {
    return NULL;
  }

  cout << "Enter val (LEFT) of " << val <<endl;
  root->left = createTree(root->left);
  cout << "Enter val (RIGHT) of " << val <<endl;
  root->right = createTree(root->right);

  return root;
}

int main() {
  node *root = NULL;
  root = createTree(root);
  return 0;
}