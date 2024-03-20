#include <iostream>
#include <climits>
int main() {
  long long int n;
  int m = 0;
  std::cin >> n;
  while (n != 0) {
    if (n % 10 == 0) {
      m++;
    }
    else {
      continue;
    }
    n /= 10;
  }
  std::cout << m; 
  system("pause");
  return 0;
}