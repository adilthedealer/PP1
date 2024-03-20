#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
void to_binary(std::vector <int>& vec, std::vector <std::string>& v_string, int n) {
    for (int i = 0; i < n; i++) {
        int k = vec[i];
        std::string s;
        while (k != 0) {
            k % 2 == 0 ? s += "0" : s += "1";
            k /= 2;
        }
        std::reverse(s.begin(), s.end());
        v_string.push_back(s);
        s.clear();
        k = 0;
    }
    for (auto& x : v_string) {
        std::cout << x << "\n";
    }
}
int main() {
    int n;
    std::cin >> n;
    std::vector <int> vec;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        vec.push_back(x);
    }
    std::vector <std::string> v_string;
    to_binary(vec, v_string, n);
    system("pause");
    return 0;
}