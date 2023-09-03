#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
  int data;
  Node *left;
  Node *right;

  Node(int d) {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

void levelOrderTraversal(Node *root) {
  queue<Node *> q;
  q.push(root);

  while (!q.empty()) {
    Node *temp = q.front();
    cout << temp->data << " ";
    q.pop();

    if (temp->left) {
      q.push(temp->left);
    }
    if (temp->right) {
      q.push(temp->right);
    }
  }
}
void levelOrderTraversalTree(Node *root) {
  queue<Node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty()) {
    Node *temp = q.front();
    cout << temp->data << " ";
    q.pop();

    if (temp->left) {
      q.push(temp->left);
    }
    if (temp->right) {
      q.push(temp->right);
    }
  }
}

Node *createTree(Node *root) {
  cout << "Enter value: " << endl;
  int val;
  cin >> val;
  root = new Node(val);

  if (val == -1) {
    return NULL;
  }

  cout << "Enter val (LEFT): " << val << endl;
  root->left = createTree(root->left);
  cout << "Enter val (RIGHT): " << val << endl;
  root->right = createTree(root->right);

  return root;
}

int main() {
  Node *root = NULL;

  // create tree
  root = createTree(root);

  levelOrderTraversal(root);
}