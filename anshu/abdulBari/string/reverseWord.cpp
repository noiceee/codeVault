#include <iostream>
using namespace std;

void reverseW(char *str) {
  int i, j;
  for (i = 0; str[i] != '\0'; i++) {
  }
  i--;
  for (j = 0; j < i; j++) {
    char temp;
    temp = str[j];
    str[j] = str[i];
    str[i] = temp;
    i--;
  }

  for (int i = 0; str[i] != '\0'; i++) {
    cout << str[i];
  }
}

int main() {
  char str[] = {"Aanshu"};
  reverseW(str);
}