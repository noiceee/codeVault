#include <iostream>
#include <unordered_map>

using namespace std;

int modeVal(int *arr, int &size) {
  unordered_map<int, int> modeMap;
  int maxMode = -1;
  for (int i = 0; i < size; i++) {
    modeMap[arr[i]]++;
  }

  for (auto i:modeMap) {
    if (i.second >= maxMode){
        maxMode = i.second;
        }
    }

    if(maxMode==1){
        if(size==0){
            return 0;
        }

    }

    return maxMode;
}

int main() {
  int t;
  cin >> t;
  while (t > 0) {
    int size;
    cin >> size;
    int *arr = new int[size];
    for (int i = 0; i < size; i++) {
      cin >> arr[i];
    }
    cout << modeVal(arr, size) << "\n";
    t--;
  }
}