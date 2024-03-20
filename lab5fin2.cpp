#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
int main() {
    int n, k, power = 0, l = 0, temp, counter = 0; 
    std::cin >> n >> k;
    std::string s;
    temp = n;
    while (temp != 0) {
        temp /= k;
        counter++;
    }
    while (power <= counter && n != 0) {
        l = (n % k);
        l <= 9 ? s.push_back(l + 48) : s.push_back(l + 55);
        n /= k;
    }
    std::reverse(s.begin(), s.end());
    std::cout << s;
    system("pause");
    return 0;
}