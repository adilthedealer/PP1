#include <iostream>

int findFibonacciNumber(int A) {
    int prev = 0, current = 1, index = 1;

    while (current <= A) {
        if (current == A) {
            return index;
        }
        int temp = current;
        current += prev;
        prev = temp;
        index++;
    }

    return -1;
}

int main() {
    int A;
    std::cin >> A;

    int result = findFibonacciNumber(A);

    if (result != -1) {
        std::cout << result << std::endl;
    } else {
        std::cout << result << std::endl;
    }
    system("pause");
    return 0;
}
