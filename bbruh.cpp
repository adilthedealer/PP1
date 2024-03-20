#include <iostream>
#include <string>

int main() {
    std::string s;
    std::string t;
    std::cin >> s >> t;
    if (s.find(t) != std::string::npos) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}