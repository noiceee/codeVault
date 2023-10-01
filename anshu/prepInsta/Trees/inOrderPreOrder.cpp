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

void preOrderStack(node *root) {
  stack<node *> s;
  while (1) {

    while (root) {
      cout << root->data << " ";
      root = root->left;
    }
    if (s.empty()) {
      break;
    }
    root = s.top();
    s.pop();

    root = root->right;
  }
}

void inOrderStack(node *root) {
  stack<node *> s;
  while (1) {
    while (root) {
      root = root->left;
      cout << root->data << " ";
    }

    if (s.empty()) {
      break;
    }

    root = s.top();
    s.pop();

    root = root->right;
  }
}
void preOrder(node *root) {
  if (root) {
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
  }
}
void inOrder(node *root) {
  if (root) {
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
  }
}

node *createTree(node *root) {
  int val;
  cout << "enter node: ";
  cin >> val;
  root = new node(val);

  if (val == -1) {
    return NULL;
  }

  cout << "node left of " << val << " : ";
  root->left = createTree(root->left);
  cout << "node right of " << val << " : ";
  root->right = createTree(root->right);

  return root;
}

int main() {
  node *root = NULL;
  root = createTree(root);
  preOrder(root);
  cout << "\n";
  inOrder(root);
}
