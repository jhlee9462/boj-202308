#include <iostream>

int main() {
    // 두 점을 입력받는다
    int x, y;
    std::cin >> x >> y;
    // x가 양수이고
    if (x > 0) {
        // y 가 양수이면 1
        if (y > 0) {
            std::cout << 1;
            return 0;
        }
        // 아니면 4
        std::cout << 4;
        return 0;
    } else {
        // 아니고
        if (y > 0) {
            // y가 양수이면 2
            std::cout << 2;
            return 0;
        }
        // 아니면 3
        std::cout << 3;
        return 0;
    }
}
