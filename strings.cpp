#include <iostream>
#include <string>
#include <vector>
int main() {
    int k = 0, n = 0;
    std::string s;
    std::getline(std::cin, s);
    std::vector <int> a;
    for (int i = 0; i < s.length(); i++) {
        k = (int)s[i];
        a.push_back(k);
        n++;
    }
    int m = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] + 1 <= a[i + 1] || a[i] <= a[i + 1]) {
            m++;
        }
        else {
            continue;
        }
    }
    m == n ? std::cout << "YES" : std::cout << "NO";
    system("pause");
    return 0;
} 