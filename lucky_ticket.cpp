#include <iostream>
#include <vector>
void vect_comp(std::vector <int>& a1, std::vector <int>& a2, int count = 0) {
    for (auto c1 : a1) {
        for (auto c2 : a2) {
            if (c1 == c2) {
                count++;
            }
            else {
                continue;
            }
        }
    }
    std::cout << count;
}
int main() {
    int n, count = 0;
    std::cin >> n;
    std::vector <int> a1(n);
    std::vector <int> a2(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a1[i];
    }
    for (int j = 0; j < n; j++) {
        std::cin >> a2[j];
    }
    vect_comp(a1, a2, count);
    system("pause");
    return 0;
}