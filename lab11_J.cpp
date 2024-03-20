#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <utility>
bool cmp(std::pair <double, int> p1, std::pair <double, int> p2) {
    return p1.first < p2.first;
}
int main() {
    int x, y;
    std::cin >> x >> y;
    int n;
    std::cin >> n;
    std::vector <std::pair <int, int>> vec(n);
    std::vector <std::pair <double, int>> vect;
    for (int i = 0; i < n; i++) {
        int a, b;
        std::cin >> a >> b;
        vec[i] = {a, b};
    }
    for (int i = 0; i < n; i++) {
        double t = sqrt((vec[i].first - x) * (vec[i].first - x) + (vec[i].second - y) * (vec[i].second - y));
        int index = i;
        std::pair pr = std::make_pair(t, index);
        vect.push_back(pr);
    }
    std::sort(vect.begin(), vect.end(), cmp);
    for (int i = 0; i < n; i++) {
        int index = vect[i].second;
        std::cout << vec[index].first << ' ' << vec[index].second << "\n";
    }
    system("pause");
    return 0;
}