#include <iostream>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>
bool cmp(int x, int y) {
    return x < y;
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
    int distance = n - 1, breakpoint = 0;
    for (int i = 0; i < n; i++) {
        if (vec[i] == 0) {
            distance = n - i;
            breakpoint = i + 1;
        }
    } 
    int max_surface = 0, temp;
    std::stack <int> st;
    for (int i = 0; i < n; i++) {
        temp = *std::min_element(vec.begin() + i, )
        if (st.empty()) {
            st.push(vec[i]);
        } else {
            if (st.top() > max_surface) {
                max_surface = st.top();
                if (*std::min_element(vec.begin(), vec.begin() + i, cmp) * std::distance(vec.begin(), vec.begin() + i) > st.top()) {
                    max_surface = *std::min_element(vec.begin(), vec.begin() + i, cmp) * std::distance(vec.begin(), vec.begin() + i);
                    st.pop();
                }
                else if (*std::min_element(vec.begin(), vec.begin() + i, cmp) * std::distance(vec.begin(), vec.begin() + i) <= st.top() && distance + 1 > st.top()) {
                    max_surface = distance + 1;
                    st.pop();
                }
                else if (*std::min_element(vec.begin(), vec.begin() + i, cmp) * std::distance(vec.begin(), vec.begin() + i) <= st.top() && distance + 1 <= st.top())
            }
        }
    }
    std::cout << max_surface << "\n";
    system("pause");
    return 0;
}