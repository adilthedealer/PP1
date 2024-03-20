#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n, k;
    std::cin >> n >> k;
    std::vector <int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        if (i >= 1) {
        if (a[i] - a[i - 1] < k) {
            std::cout << "cheater" << "\n";
            goto fin;
        }
        }
    }
    std::cout << "no" << "\n";
    fin:
    system("pause");
    return 0;
}