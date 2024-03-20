#include <iostream>
#include <cmath>
int luck(int i, int n, int sum1, int sum2) {
    int tmp = i;
    while (tmp != 0) {
        tmp /= 10;
        n++;
    }
    for (int k = 0; k < n / 2; k++) {
        sum1 += (i % 10);
        i /= 10;
    }
    for (int k = n / 2; k < n; k++) {
        sum2 += (i % 10);
        i /= 10;
    }
    if (sum1 == sum2) {
        return true;
    }
    else {
        return false;
    }
}
int main() {
    int i, n = 0, sum1 = 0, sum2 = 0, tmp;
    std::cin >> i;
    tmp = i;
    luck(i, n, sum1, sum2) == true ? std::cout << "Yes" : std::cout << "No";
    system("pause");
    return 0;
}