#include <iostream>
#include <string>
#include <algorithm>
int main() {
    int n = 1, k = 0, temp = 0;
    std::string s;
    std::getline(std::cin, s);
    std::sort(s.begin(), s.end());
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == s[i + 1]) {
            n++;
        }
        else {
            if (s.length() % n == 0) {
                if (n >= temp) {
                temp = n;
                }
            }
            else {
                std::cout << "NO";
                goto finish;
            }
            k++;
            n = 1;
        }
    }
    temp * k == s.length() ? std::cout << "YES" : std::cout << "NO";
    finish:
    system("pause");
    return 0;
}