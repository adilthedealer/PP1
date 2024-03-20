#include <iostream>
#include <string>
#include <cctype>
int main() {
    std::string s;
    std::cin >> s;
    std::string t;
    for (char c : s) {
        if (isalpha(c)) {
            t += c;
        }
    }
    std::cout << t << "\n";
    system("pause");
    return 0;
}