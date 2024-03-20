#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <numeric>
bool comp_s(std::pair <std::string, int> p1, std::pair <std::string, int> p2) {
    return p1.second > p2.second;
}
int main() {
    int n;
    double sum;
    std::cin >> n;
    std::map <std::string, int, std::greater <std::string>> m;
    std::vector <std::pair <std::string, int>> vect;
    std::vector <int> v_sum;
    std::vector <std::pair <std::string, double>> v_fin;
    for (int i = 0; i < n; i++) {
        std::string s;
        int x;
        std::cin >> s >> x;
        m[s] += x;
    }
    for (auto& x : m) {
        std::string s = x.first;
        int k = x.second;
        std::pair j = std::make_pair(s, k);
        vect.push_back(j);
    }
    std::stable_sort(vect.begin(), vect.end(), comp_s);
    for (auto& now : vect) {
        v_sum.push_back(now.second);
    }
    sum = std::accumulate(v_sum.begin(), v_sum.end(), 0);
    for (auto& x : vect) {
        std::string s = x.first;
        double k = (x.second / sum) * 100;
        std::pair j = std::make_pair(s, k);
        v_fin.push_back(j);
    }
    for (auto& x : v_fin) {
        std::cout << x.first << ' ' << x.second << "%" << "\n";
    }
    system("pause");
    return 0;
}