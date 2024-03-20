#include <iostream>
#include <cmath>
void gcd_specific(int a, int b, int c) {
    int cnt = 0;
    int res = std::min(a, b);
    while (res != 0) {
        if (a % res == 0 && b % res == 0) {
            ++cnt;
        }
        if (cnt == c) {
            break;
        }
        res--;
    }
    std::cout << res;
}
int main() {
    int n, m, k;
    std::cin >> n >> m >> k;
    gcd_specific(n, m, k);
    return 0;
}