#include <iostream>

int main() {
  int n, max = -1000000001, maxstr, maxstb;
    std::cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> arr[i][j];
    }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           if (arr[i][j] > max) {
                max = arr[i][j];
               maxstr = i + 1;
               maxstb = j + 1;
        }
            else if (arr[i][j] <= max) {
                continue;
            } 
        }
    }
    std::cout << maxstr << ' ' << maxstb;
  return 0;
}