#include <iostream>
int main() {
    int n;
    std::cin >> n;
    int F_prev2 = 0, F_prev = 1, Fn = 0, index = 1;
    while (Fn <= n) {
        if (Fn == n) {
            std::cout << index << "\n";
            system("pause");
            return 0;
        }
        Fn = F_prev + F_prev2;
        F_prev2 = F_prev;
        F_prev = Fn;
        index++;
    }
    std::cout << -1 << "\n";
    system("pause");
    return 0;
}