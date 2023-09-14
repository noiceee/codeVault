#include <iostream>
using namespace std;
template <typename T> class anshuVector {
  int size;
  int length;
  T *arr;

public:
  // constructor
  anshuVector() {
    size = 1;
    length = 0;
    arr = new T[1];
  }

  // destructor
  ~anshuVector() { delete[] arr; }

  //   Function definition
  void push_back(T value);
  int at(int index);
  int max();
  int min();
  int sumArr();
  int count();
  int get(int index);
  void pop_back();
  void pop_at(int index);
  void insert(int index, T value);
  void reverse();
  int find(T value);
  void display();
};

// 1. PUSH_BACK
template <typename T> void anshuVector<T>::push_back(T value) {
  if (length == size) {
    int *newarr = new int[size * 2];
    for (int i = 0; i < size; i++) {
      newarr[i] = arr[i];
    }
    delete[] arr;
    arr = newarr;
    newarr = nullptr;
    size *= 2;
  }
  arr[length] = value;
  length++;
}

// 2. AT()
template <typename T> int anshuVector<T>::at(int index) {
  int ans;
  if (index >= 0 && index < length) {
    ans = arr[index];
  }
  return ans;
}

// 3. MAX()
template <typename T> int anshuVector<T>::max() {
  int ans = arr[0];
  for (int i = 0; i < length; i++) {
    if (arr[i] > ans) {
      ans = arr[i];
    }
  }
  return ans;
}

// 4. MIN()
template <typename T> int anshuVector<T>::min() {
  int ans = arr[0];
  for (int i = 0; i < length; i++) {
    if (arr[i] < ans) {
      ans = arr[i];
    }
  }
  return ans;
}

// 5. GET()
template <typename T> int anshuVector<T>::get(int index) {
  int ans;
  if (index >= 0 && index < length) {
    ans = arr[index];
  }
  return ans;
}

// 6. SUM()
template <typename T> int anshuVector<T>::sumArr() {
  int sumAll = 0;
  for (int i = 0; i < length; i++) {
    sumAll += arr[i];
  }
  return sumAll;
}

// 7. COUNT()
template <typename T> int anshuVector<T>::count() { return length; }

// 8. POP_BACK
template <typename T> void anshuVector<T>::pop_back() { length--; }

// 9. POP_AT
template <typename T> void anshuVector<T>::pop_at(int index) {
  if (index >= 0 && index < length) {
    int x = arr[index];
    for (int i = index; i < length - 1; i++) {
      arr[i] = arr[i + 1];
    }
    length--;
  }
}

// 10. INSERT
template <typename T> void anshuVector<T>::insert(int index, T value) {
  if (index >= 0 && index < length) {
    int i = length;
    while (i > index) {
      arr[i] = arr[i - 1];
      i--;
    }
    arr[index] = value;
    length++;
  }
}

// 11. REVERSE
template <typename T> void anshuVector<T>::reverse() {
  for (int i = 0, j = length - 1; i < length / 2; i++, j--) {
    int temp;
    temp = arr[0];
    arr[0] = arr[j];
    arr[j] = temp;
  }
}

// 12. FIND
template <typename T> int anshuVector<T>::find(T value) {
  int ans;
  for (int i = 0; i < length; i++) {
    if (arr[i] == value) {
      ans = i;
    }
  }
  return ans;
}

// 13. DISPLAY
template <typename T> void anshuVector<T>::display() {
  for (int i = 0; i < length; i++) {
    cout << arr[i] << " ";
  }
}