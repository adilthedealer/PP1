#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n;
    std::vector<int> s(n);
    for (int i = 0; i < n; i++) {
        std::cin >> s[i];
    }

    std::cin >> m;
    std::vector<int> s1(m);
    for (int i = 0; i < m; i++) {
        std::cin >> s1[i];
    }

    std::sort(s.begin(), s.end());
    std::sort(s1.begin(), s1.end());

    std::vector<int> result;
    std::set_intersection(s.begin(), s.end(), s1.begin(), s1.end(), std::back_inserter(result));

    for (const auto &x : result) {
        std::cout << x << ' ';
    }

    std::cout << "\n";
    system("pause");
    return 0;
}