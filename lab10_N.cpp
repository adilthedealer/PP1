#include <iostream>
#include <algorithm>
#include <vector>
void palindromeOut(std::vector <int>& vec, int n) {
    for (int i = 0; i < n / 2; i++) {
        if (vec[i] == vec[n - 1 - i]) continue;
        else {
            std::next_permutation(vec.begin(), vec.end());
            palindromeOut(vec, n);
        }
    }
}
bool palinCheck(std::vector <int>& vec, int count, int ch, int maxi, int n) {
    int s = 0, m;
    for (int i = 0; i < n; i++) {
        if (vec[i] == vec[i + 1]) {
            ++count;
        }
        else {
            if (count > maxi) {
                maxi = count;
            }
            else {
                s++;
                if (s == n - 1) {
                    break;
                    return false;
                }
                else {
                    m = 0;
                }
            }
            ++ch;
            count = 1;
        }
    }
    if (maxi * ch == n + 1 || maxi * ch == n) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int n, count = 1, ch = 0, maxi = 1;
    std::cin >> n;
    std::vector <int> vec;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        vec.push_back(x);
    }
    std::sort(vec.begin(), vec.end());
    if (palinCheck(vec, count, ch, maxi, n)) { 
        palindromeOut(vec, n);
        for (auto x : vec) {
            std::cout << x << ' ';
        }
        std::cout << "\n";
    }
    else if (!palinCheck(vec, count, ch, maxi, n)) {
        std::cout << "Impossible\n";
    }
    system("pause");
    return 0;
}