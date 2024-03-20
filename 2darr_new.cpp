#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
void IsPrime(std::vector <int>& a, int k, int n, int c = 2, int count = 0, int t = 0) {
    for (int i = 0; i < n; i++) {
        t = a[i];
        double m;
        m = sqrt(t);
        for (int i = 2; i <= m; i++) {
            if (t % i == 0 || t < k) {
                break;
            }
            if (i == trunc(m)) {
                count++;
                break;
            }
            else if (n % i != 0) {
                continue;
            }
        }
    }
    std::cout << count << "\n";
}
int main() {
    int n, c = 2, count = 0, t = 0;
    std::cin >> n;
    std::vector <int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::sort(a.begin(), a.end());
    int k;
    std::cin >> k;
    IsPrime(a, k, n, c, count, t);
    system("pause");
    return 0;
}