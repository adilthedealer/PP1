#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main() {
    int n;
    std::cin >> n;
    std::vector <std::string> vec;
    std::string s1 = "@gmail.com";
    for (int i = 0; i < n; i++) {
        std::string s;
        std::cin >> s;
        vec.push_back(s);
    }
    for (int i = 0; i < n; i++) {
        if (vec[i].find("@gmail.com") != std::string::npos) {
            size_t found = vec[i].find(s1);
            std::string t = vec[i].substr(0, found);
            std::cout << t << "\n";
        }
    }
    system("pause");
    return 0;
}