#include <iostream>
#include <stack>
using namespace std;

class node {
public:
  int data;
  node *right;
  node *left;

  node(int d) {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

void inOrderTraversalS(node *root) {
  stack<node *> S;
  while (1) {
    while (root) {
      S.push(root);
      root = root->left;
    }
    if (S.empty())
      break;
    root = S.top();
    S.pop();
    cout << root->data << " ";
    root = root->right;
  }
}

void inOrderTraversalR(node *root) {
  if (root) {
    inOrderTraversalR(root->left);
    cout << root->data << " ";
    inOrderTraversalR(root->right);
  }
}

node *createTree(node *root) {
  int val;
  cout << "Enter node val: ";
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
  inOrderTraversalS(root);
}