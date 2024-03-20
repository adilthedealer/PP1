#include <iostream>
#include <string>

int main() {
    std::string s;
    std::string t;
    std::cin >> s >> t;
    int n = t.length(), k = s.length();
    if (t.find(s) != std::string::npos && n % k == 0) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    system("pause");
    return 0;
}