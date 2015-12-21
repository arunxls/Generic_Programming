#include <stdio.h>

template <typename T>
class array {
  T* data;
  int n;

public:
  array (int n_) : data(new T[n_]), n(n_) {}
  ~array () { delete [] data; }

  friend bool operator==(const array<T>& v1, const array<T>& v2) {
    return v1.data == v2.data;
  }
  T& operator[](int i) { return data[i]; }
  int size() { return n; }
};

void f(array<int> x) {
    return;
}

int main() {
    array<int> a(10);
    // f(a);
}