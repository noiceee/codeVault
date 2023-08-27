#include <iostream>

using namespace std;

int main() {
  char str[] = {"hi my name is ANSHU"};
  char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
  int vCount = 0;
  int cCount = 0;

  for (int i = 0; str[i] != '\0'; i++) {
    bool vowelFlag = false;
    for (int j = 0; j < 10; j++) {
      if (str[i] == vowels[j]) {
        vowelFlag = true;
        break;
      }
    }
    if (vowelFlag) {
      vCount++;
    } else if ((str[i] >= 65 && str[i] <= 90) ||
               (str[i] >= 97 && str[i] <= 122)) {
      cCount++;
    }
  }

  cout << "\nVowels: " << vCount << "\n";
  cout << "Consonants: " << cCount;
}