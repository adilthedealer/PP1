#include <iostream>
#include <cctype>
#include <string>
int main() {
    std::string s, t;
    std::cin >> s;
    for (char c : s) {
        if (isalpha(c)) {
            t += c;
        }
    }
    std::cout << t << "\n";
    system("pause");
    return 0;
}