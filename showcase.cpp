#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    map <string, int> m;
    for (int i = 0; i < n; i++) {
        string s;
        int x;
        cin >> s >> x;
        m[s] += x;
    }
    for (auto x : m) {
        std::cout << x.first << ' ' << x.second << "\n";
    }
    system("pause");
    return 0;
}