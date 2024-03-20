#include <iostream>
#include <string>
#include <algorithm>
int main() {
    std::string s;
    std::getline(std::cin, s);
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            int num = s[i] - 'A';
            s[i] = 'a' + num;
        }
    }
    std::sort(s.begin(), s.end());
    s.erase(unique(s.begin(), s.end()), s.end());
    std::cout << s.length() << "\n";
    for (auto x : s) {
        std::cout << x << ' ';
    }
    system("pause");
    return 0;
}