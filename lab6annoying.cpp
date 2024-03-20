#include <iostream>
#include <set>
int main() {
    int n, x, count = 0;
    std::cin >> n;
    std::set <int> s;
    for (int i = 0; i < n; i++) {
        std::cin >> x;
        s.insert(x);
    }
    for (int j = 0; j < n; j++) {
        std::cin >> x;
        if (s.find(x) != s.end()) {
            count++;
        }
        else {
            continue;
        }
    }
    std::cout << count;
    system("pause");
    return 0;
}