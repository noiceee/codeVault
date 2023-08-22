#include <iostream>
#include <vector>

using namespace std;

// 1. Compare with other elements
void findDupliC(char *str) {
  vector<char> ans;
  for (int i = 0; str[i] != '\0'; i++) {
    for (int j = i + 1; str[j] != '\0'; j++) {
      if (str[i] == str[j]) {
        ans.push_back(str[i]);
      }
    }
  }

  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }
}

// 2. HashTable as counting
void findDupliH(char *str) {
  int H[26] = {0};
  for (int i = 0; str[i] != '\0'; i++) {
    H[str[i] - 97]++;
  }

  for (int i = 0; i < 26; i++) {
    if (H[i] > 1) {
      cout << char(i + 97) << " ";
    }
  }
}

// 3. Using Bits
void findDupliB(char *str){
    
}

int main() {
  char str[] = "finding";
  findDupliH(str);
}