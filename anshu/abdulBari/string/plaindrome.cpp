#include <iostream>
#include <vector>

using namespace std;

void plaindrome(char *str) {
  int i;
  bool flag = true;
  for (i = 0; str[i] != '\0'; i++) {
  }
  i = i - 1;

  for (int j = 0; str[j] != '\0'; j++) {
    if (str[j] == str[i]) {
      flag = flag;
      i--;
    } else {
      flag = !flag;
      break;
    }
  }
  cout << flag;
}

int main() {
  char str[] = {"anshu"};
  plaindrome(str);
}