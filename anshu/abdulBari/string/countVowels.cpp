#include <iostream>

using namespace std;

int main() {
  char str[] = {"hi my name is ANSHU"};
  int vCount = 0;
  int cCount = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
        str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
        str[i] == 'O' || str[i] == 'U') {
      vCount++;
    } else if ((str[i] >= 65 && str[i] <= 90) ||
               (str[i] >= 97 && str[i] <= 122)) {
      cCount++;
    }
  }

  cout << "\nVowels: " << vCount << "\n";
  cout << "Consonants: " << cCount;
}