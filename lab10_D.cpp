#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <numeric>
bool comp(std::vector <int> v1, std::vector <int> v2) {
    int in = 0;
    return accumulate(v1.begin(), v1.end(), in) < accumulate(v2.begin(), v2.end(), in);
}
int main() {
    int n;
    std::cin >> n;
    std::vector <std::vector <int>> vect;
    for (int i = 0; i < n; i++) {
        int m;
        std::cin >> m;
        std::vector <int> vec(m);
        for (int j = 0; j < m; j++) {
            std::cin >> vec[j];
        }
        vect.push_back(vec);
    }
    std::sort(vect.begin(), vect.end(), comp);
    for (int i = 0; i < vect.size(); i++) {
        for (int j = 0; j < vect[i].size(); j++) {
            std::cout << vect[i][j] << ' ';
        }
        std::cout << "\n";
    }
    system("pause");
    return 0;
}