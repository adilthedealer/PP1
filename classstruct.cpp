#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
typedef std::vector <int> v;
int main() {
    int n;
    std::cin >> n;
    v vec;
    vec.push_back(n);
    do {
        std::cin >> n;
        vec.push_back(n);
    } while (n != 0);
    vec.erase(find(vec.begin(), vec.end(), 0));
    int sum = 0, r = 0;
    while (r < int(vec.size() / 2)) {
        sum = vec[vec.size() - (1 + r)] + vec[r];
        std::cout << sum << "\n";
        r++;
        sum = 0;
    }
    if (vec.size() % 2 != 0) {
        std::cout << vec[round(vec.size() / 2)] << "\n";
    }
    system("pause");
    return 0;
}