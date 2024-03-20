#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector <std::string> vec;
    std::string t;
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        std::sort(s.begin(), s.end());
        s.erase(std::unique(s.begin(), s.end()), s.end());
        vec.push_back(s);
        t += s;
    }
    std::sort(t.begin(), t.end());
    t.erase(std::unique(t.begin(), t.end()), t.end());
    int cnt = 0;
    for (int i = 0; i < t.length(); i++) {
        for (int j = 0; j < n; j++) {
            std::string r = vec[j];
            if (std::find(r.begin(), r.end(), t[i]) == r.end()) {
                cnt = 0;
                break;
            } 
            else {
                cnt++;
            }
        }
        if (cnt != 0) {
            cnt = 0;
        } 
        else {
            t.erase(std::find(t.begin(), t.end(), t[i]));
            i--;
        }
        cnt = 0;
    }
    std::sort(t.begin(), t.end());
    t.erase(std::unique(t.begin(), t.end()), t.end());
    if (t.size() == 0) std::cout << "NO COMMON CHARACTERS\n";
    else {
        for (auto& x : t) {
            std::cout << x << ' ';
        }
        std::cout << "\n";
    }
    system("pause");
    return 0;
}