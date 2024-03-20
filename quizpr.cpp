#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <algorithm>
typedef std::vector <std::pair <std::string, int>> v;
int main() {
    int n;
    std::cin >> n;
    v vec;
    v v_order;
    for (int i = 0; i < n; i++) {
        std::string s;
        int x;
        std::cin >> s >> x;
        vec.push_back(std::make_pair(s, x));
    }
    std::vector <std::string> order = {"red", "orange", "yellow", "green", "cyan", "blue", "purple"};
    for (int i = 0; i < order.size(); i++) {
        for (int j = 0; j < n; j++) {
            if (order[i] == vec[j].first) {
                v_order.push_back(vec[j]);
            }
        }
    }
    std::pair <std::string, int> pa;
    for (int i = 0; i < n; i++) {
        if (vec[i].first == vec[i + 1].first && vec[i].second > vec[i + 1].second) {
            pa = vec[i];
            vec[i] = vec[i + 1];
            vec[i + 1] = pa;
        }
    }
    for (const auto& x : v_order) {
        std::cout << x.first << ' ' << x.second << "\n";
    }
    system("pause");
    return 0;
}