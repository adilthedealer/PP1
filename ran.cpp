#include <iostream>
#include <vector>
int main() {
  int n, m;
  std::cin >> n >> m;
  std::vector <int> a(n);
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  } 
  for (int i = 0; i < n; i++) {
    if (a[i] + 1 == m || a[i] == m) {
      std::cout << i + 1;
    }
    else {
      
    }
  }
  return 0;
}
    
 