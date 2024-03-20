#include <iostream>
#include <vector>

int main() {
    int n, l, r;
    std::cin >> n >> l >> r;
    std::vector <int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    for (int i = 0; i < l - 1; i++) {
        std::cout << a[i] << " ";
    }
    for (int i = r - 1; i >= l - 1; i--) {
        std::cout << a[i] << " ";
    }
    for (int i = r; i < n; i++) {
        if (r == n) {
            break;
        }
        std::cout << a[i] << " ";
    }
    return 0;
}