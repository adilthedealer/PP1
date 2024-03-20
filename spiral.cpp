#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    int n, x;
    std::cin >> n;
    std::vector <int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::cin >> x;
    std::sort(a.begin(), a.end());
    if (std::binary_search(a.begin(), a.end(), x)) std::cout << "Yes";
    else std::cout << "No";
    system("pause");
    return 0;
}