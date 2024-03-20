#include <iostream>
#include <vector>
int main() {
  int n, max = 0, min = -1;
  std::cin >> n;
  std::vector <int> a(n);
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  int num_min = 0, num_max = 0; 
  for (int i = 0; i < n; i++) {
    if (a[i] < a[num_min]) {
        num_min = i;
    }
    if (a[i] >= a[num_max]) {
      num_max = i;
    }
  }
  for (int i = 0; i < n; i++) {
    if (a[i] == a[num_max]) {
        a[i] = a[num_min];
    }
  }
  for (auto x : a) {
    std::cout << x << ' ';
  }
  return 0;
}