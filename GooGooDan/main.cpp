#include <iostream>

int main() {
    // n을 입력받는다.
    int n;
    std::cin >> n;
    // 반복문 안에서 출력한다.
    for (int i = 0; i < 9; ++i) {
       std::cout << n << " * " << i + 1 << " = " << n * (i + 1) << std::endl;
    }
    return 0;
}
