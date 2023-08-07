#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    double c = static_cast<double>(a) / static_cast<double>(b);
    std::cout.precision(16);
    std::cout << c << std::endl;
    return 0;
}
