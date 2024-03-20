#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
int main() {
    std::string s;
    int n, temp, t = 0, m = 0, p = 0;
    std::cin >> n;
    temp = n;
    while (temp != 0) {
        temp /= 2;
        m++;
    }
    while (p <= m && n != 0) {
        n % 2 == 0 ? s.push_back('0') : s.push_back('1');
        n /= 2;
    }
    std::reverse(s.begin(), s.end());
    std::cout << s << std::endl;
    system("pause");
    return 0;
}