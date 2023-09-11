#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // x, y 를 입력받는다.
    int x, y;
    std::cin >> x >> y;
    // 2 번 반복한다.
    for (int i = 0; i < 2; ++i) {
        // a, b 를 입력받는다.
        int a, b;
        std::cin >> a >> b;
        // x = x ^ a
        x = x ^ a;
        // y = y ^ b
        y = y ^ b;
    }
    // x, y 를 출력한다.
    std::cout << x << ' ' << y;
    return 0;
}
