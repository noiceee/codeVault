#include <iostream>
#include <stack>
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

void postOrderTraversalR(node *root) {
  if (root) {
    postOrderTraversalR(root->left);
    postOrderTraversalR(root->right);
    cout << root->data << " ";
  }
}

node *createTree(node *root) {
  int val;
  cout << "Enter node: ";
  cin >> val;
  root = new node(val);

  if (val == -1) {
    return NULL;
  }

  cout << "Enter node left of " << val << " : ";
  root->left = createTree(root->left);
  cout << "Enter node right of " << val << " : ";
  root->right = createTree(root->right);

  return root;
}

int main() {
  node *root = NULL;

  root = createTree(root);
  postOrderTraversalR(root);
}