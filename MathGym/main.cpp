#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n 을 입력받는다.
    long n;
    std::cin >> n;
    // 1 - 4
    // 2 - 8
    // n - 4 * n
    // 4 * n 을 출력한다.
    std::cout << 4 * n;
    return 0;
}
