#include <iostream>
#include <stack>
#include <string>

using namespace std;

int isOperand(char x) {
  if (x == '+' || x == '-' || x == '*' || x == '/') {
    return 0;
  } else
    return 1;
}

int pre(char x) {
  if (x == '+' || x == '-') {
    return 1;
  } else if (x == '*' || x == '/') {
    return 2;
  }
  return 0;
}

stack<char> stack;

string convert(string infix) {
  string postfix;
  int i = 0, j = 0;
  while (infix[i] != '\0') {
    if (isOperand(infix[i])) {
      postfix[j++] = infix[i++];
    } else {
      if
    }
  }
}
int main() {}