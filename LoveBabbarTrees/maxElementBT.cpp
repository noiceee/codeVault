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

void maxElement(node* root){
    int root_val , left , right , max = INT_MIN;
    if(root){
        root_val = root->data;
        left = maxElement(root->left);
        right = maxElement(root->right);
    }
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
    }