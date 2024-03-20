#include <iostream>
#include <algorithm>
int main() {
    int n, m;
    std::cin >> n >> m;
    int a[n * m];
    for (int i = 0; i < n * m; i++) {
        std::cin >> a[i];
    }
    std::sort(a, a + n * m);
    int counter = 0, y = 0;
    while (counter < n * m) {
        std::cout << a[n * m - (1 + y)] << ' ';
        counter++;
        if (counter % m == 0) {
            std::cout << "\n";
        }
        std::cout << a[y] << ' ';
        counter++;
        if (counter % m == 0) {
            std::cout << "\n";
        }
        y++;
    }
    system("pause");
    return 0;
}