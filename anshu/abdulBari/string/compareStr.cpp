#include <iostream>
#include <vector>

using namespace std;

void compareStr(char *str1, char *str2) {
  vector<char> ans;
  for (int i = 0, j = 0; str1[i] != '\0' || str2[j] != '\0'; i++, j++) {
    if (str1[i] == str2[j]) {
      ans.push_back(str1[i]);
    } else {
      break;
    }
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i];
  }
}

int main() {
  char str1[] = {"anshuK"};
  char str2[] = {"anshu"};
  compareStr(str1, str2);
}