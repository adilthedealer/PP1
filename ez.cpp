#include <iostream>
#include <string>
 
int main() {
    std::string s, s1;
    getline(std::cin, s);
    for (auto now : s) {
        if (now >= 'a' && now <= 'z') {
            s1.insert(now);
        }
    }
}