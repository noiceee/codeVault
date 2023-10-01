#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
  string a, b;
  cout << "enter a: ";
  cin >> a;
  cout << "enter b: ";
  cin >> b;
  vector<int> arr1;
  vector<int> arr2;
  for(int i=0 ; i<a.length() ; i++){
    arr1.push_back(a[i]);
  }
  for(int i=0 ; i<a.length() ; i++){
    cout<<arr1[i]<<" ";
  }
}