#include <iostream>
#include <string>

using namespace std;

string anagram(char *str1, char *str2) {
  string ans;
  int H[26] = {0};
  for (int i = 0; str1[i] != '\0'; i++) {
    H[str1[i] - 97]++;
  }
  for (int i = 0; str2[i] != '\0'; i++) {
    H[str2[i] - 97]--;
  }
  for (int i = 0; i < 26; i++) {
    if (H[i] != 0) {
      ans = "False";
      break;
    }
    ans = "True";
  }
  return ans;
}

int main() {
  char str1[] = "decimali";
  char str2[] = "medical";
  cout << anagram(str1, str2);
}