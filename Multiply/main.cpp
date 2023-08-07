#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;
    int* result = new int[3];
    for (int i = 0; i < 3; i++) {
        int decimal = (b % 10) * a;
        result[i] = decimal;
        b /= 10;
        std::cout << decimal << std::endl;
    }
    std::cout << result[0] + result[1] * 10 + result[2] * 100 << std::endl;
    return 0;
}
