#include <iostream>
#include <string>
#include <utility>
#include <set>
int main() {
    int n;
    std::cin >> n;
    std::multiset <std::pair <std::string, int>> s;
    for (int i = 0; i < n; i++) {
        std::string t;
        int x;
        std::cin >> t >> x;
        std::pair k = std::make_pair(t, x);
        s.insert(k);
    }
    int cnt = 0;
    std::string t = s.begin()->first;
    int x = s.begin()->second;
    for (auto itr = s.begin(); itr != s.end(); ++itr) {
        auto pos = ++itr;
        --itr;
        if (pos == s.end()) {
            if (cnt >= 3 && t == itr->first) {
                std::cout << t << " " << "+1" << "\n";
            }
            else if (cnt < 3 && t == itr->first) {
                std::cout << t << ' ' << "NO BONUS" << "\n";
            }
            else if (cnt >= 3 && t != itr->first) {
                std::cout << t << ' ' << "+1" << "\n";
                std::cout << itr->first << ' ' << "NO BONUS" << "\n";
            }
            else if (cnt < 3 && t != itr->first) {
                std::cout << t << ' ' << "NO BONUS" << "\n";
                std::cout << itr->first << ' ' << "NO BONUS" << "\n";
            }
            break;
        }
        if (t == itr->first && x != itr->second || t == itr->first && x == itr->second && itr == s.begin()) {
            cnt++;
        }
        else if (t == itr->first && x == itr->second && itr != s.begin()) {
            cnt = cnt;
        }
        else {
            if (cnt >= 3) {
                std::cout << t << ' ' << "+1" << "\n";
            }
            else {
                std::cout << t << ' ' << "NO BONUS" << "\n";
            }
            t = itr->first;
            x = itr->second;
            cnt = 1;
        }
    }
    system("pause");
    return 0;
}