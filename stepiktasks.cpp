#include <iostream>
#include <unordered_map>
#include <utility>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::unordered_map <std::string, std::string> st;
    for (int i = 0; i < n; i++) {
        std::string s, t;
        std::cin >> s >> t;
        std::pair <std::string, std::string> p = std::make_pair(s, t);
        st.emplace(p);
    }
    std::string f;
    std::cin >> f;
    auto pos = st.find(f);
    if (pos != st.end()) {
        if (f == pos->first) {
            std::cout << pos->second << "\n";
        } else {
            std::cout << pos->first << "\n";
        }
    }
    system("pause");
    return 0;
}