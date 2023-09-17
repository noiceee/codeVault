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

void preOrderTraversalR(node *root) {
  if (root) {
    cout << root->data << " ";
    preOrderTraversalR(root->left);
    preOrderTraversalR(root->right);
  }
}

void preOrderTraversalS(node *root) {
  stack<node *> S;
  while (1) {
    while (root) {
      cout << root->data << " ";
      S.push(root);
      root = root->left;
    }
    if (S.empty())
      break;
    root = S.top();
    S.pop();
    root = root->right;
  }
}

node *createTree(node *root) {
  int val;
  cout << "Enter Node: ";
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

// 8 3 1 -1 -1 6 4 -1 -1 7 -1 -1 10 -1 14 13 -1 -1
int main() {
  node *root = NULL;
  root = createTree(root);

  cout << "\n";
  preOrderTraversalS(root);
}