#include <iostream>
#include <vector>
#include <cmath>
int gcd_s(int a, int b) {
    int count = std::min(a, b);
    while (count != 0) {
        if (a % count == 0 && b % count == 0) {
            break;
        }
        count--;
    }
    return count;
}
int main() {
    int n;
    std::cin >> n;
    std::vector <int> vec;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        vec.push_back(x);
    }
    int temp, cnt = 0, max = 0;
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            temp = vec[cnt];
            if (cnt == i) {
                continue;
            }
            else {
                int g = gcd_s(temp, vec[i]);
                if (g >= max) {
                    max = g;
                }
            }
        }
        cnt++;
    }
    std::cout << max << "\n";
    system("pause");
    return 0;
}