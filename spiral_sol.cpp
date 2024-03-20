#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
void IsPrime(std::vector <int>& vec, int n, int counter = 0) {
    for (int i = 0; i < n; i++) {
        if (vec[i] == 2 || vec[i] == 3) {
            counter++;
            continue;
        }
        if (vec[i] == 0 || vec[i] == 1) continue;
        else {
            int temp;
            temp = vec[i];
            double k = sqrt(temp);
            for (int j = 2; j < k; j++) {
                if (temp % j == 0) {
                    break;
                }
                else if (j == trunc(k)) {
                    counter++;
                    break;
                }
                else if (temp % j != 0) {
                    continue;
                }
            }
        }
    }
    std::cout << counter << "\n";
}
int main() {
    int n, counter = 0;
    std::cin >> n;
    std::vector <int> vec;
    for (int i = 0; i < n; i++) {
        int x;
        std::cin >> x;
        vec.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        if (vec[i] < 0) {
            vec[i] *= -1;
        }
    }
    IsPrime(vec, n, counter);
    system("pause");
    return 0;
}