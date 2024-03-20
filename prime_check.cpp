#include <iostream>
#include <string>
int main() {
    std::string s1;
    std::string s2;
    int n = 0;
    std::cin >> s1 >> s2;
    for (int i = s1.length() - s2.length(); i < s2.length(); i++) {
        for (int j = 0; j < s2.length(); j++) {
            if (i - (s1.length() - s2.length()) == j) {
                if (s1[i] == s2[j]) {
                    n++;
                }
                else {
                    continue;
                }
            }
            else {
                continue;
            }
        }
    }
    n >= s2.length() ? std::cout << "YES" : std::cout << "NO";
    return 0;
}