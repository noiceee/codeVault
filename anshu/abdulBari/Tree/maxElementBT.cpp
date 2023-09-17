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

// myself
void maxElement(node *root) {
  int root_val, left, right, max = INT_MIN;
  stack<node *> S;
  while (1) {
    while (root) {
      S.push(root);
      root = root->left;
    }
    if (S.empty())
      break;
    if (S.top()->data > max) {
      max = S.top()->data;
    }
    root = S.top();
    S.pop();
    root = root->right;
  }
  cout << max << " max";
}

node *createTree(node *root) {
  int val;
  cout << "Enter root node: ";
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
  maxElement(root);
}