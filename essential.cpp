#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::map <std::string, int> dorama_episodes;

    for (int i = 0; i < n; i++) {
        std::string s;
        int k;
        std::cin >> s >> k;
        dorama_episodes[s] += k;
    }

    std::vector <std::string> sorted_doramas;
    for (auto entry : dorama_episodes) {
        sorted_doramas.push_back(entry.first);
    }

    std::sort(sorted_doramas.begin(), sorted_doramas.end());

    for (std::string dorama : sorted_doramas) {
        std::cout << dorama << " " << dorama_episodes[dorama] << "\n";
    }
    system("pause");
    return 0;
}
