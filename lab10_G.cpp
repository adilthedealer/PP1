#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iterator>
#include <utility>
int main() {
    int n, m = 0, temp = 0;
    std::cin >> n;
    std::string t;
    std::unordered_multimap <std::string, int> team;
    std::multimap <std::string, int> team_fixed;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2; j++) {
            std::string s;
            int x;
            std::cin >> s >> x;
            t += s;
            t += ' ';
            m += x;
            if (j != 1) {
                t += "and";
                t += ' ';
            }
            team.emplace(s, x);
        }
        if (temp != m || team_fixed.find(t) == team_fixed.end()) {
            temp = m;
            team_fixed.emplace(t, m);
            t.clear();
            m = 0;
        }
        else {
            t.clear();
            m = 0;
        }
    }
    for (auto itr = team_fixed.begin(); itr != team_fixed.end(); ++itr) {
        std::cout << itr->first << itr->second << "\n";
    }
    system("pause");
    return 0;
}