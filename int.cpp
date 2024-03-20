#include <iostream>
int rec(int n, int k = 0) {
    k += 1;
    if (k == n + 1) {
        return 0;
    }
    std::cout << k << ' ';
    return rec(n, k);
}
int main() {
    int n, k = 0;
    std::cin >> n;
    rec(n, k);
}