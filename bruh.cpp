#include <iostream>
#include <iomanip>
#include <cmath>
double math(int a, int b) {
return sqrt(a * a + b * b);
}
int main() {
int a, b;
std::cin >> a >> b;
std::cout << std::setprecision(4) << math(a,b);
system("pause");
return 0;
}