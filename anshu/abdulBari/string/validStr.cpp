#include <iostream>

using namespace std;

bool isValid(char *str) {
  bool flag = true;
  for (int i = 0; str[i] != '\0'; i++) {
    if (!(str[i] >= 65 && str[i] <= 90) || !(str[i] >= 97 && str[i] <= 122) ||
        !(str[i] >= 48 && str[i] <= 57)) {
      flag = !flag;
    }
  }
  return flag;
}

int main() {
  char str[] = {"Aanshu"};
  cout << isValid(str);
}