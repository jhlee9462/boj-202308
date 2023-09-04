#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 무한 반복한다.
    while (true) {
        // 숫자 a, b 를 입력받는다.
        int a, b;
        std::cin >> a >> b;
        // a, b 가 모두 0 이면 break;
        if (a == 0 && b == 0)
            break;
        // b % a == 0 이면
        if (b % a == 0) {
            // factor 를 출력한다.
            std::cout << "factor\n";
        }
        // a % b == 0 이면
        else if (a % b == 0) {
            // multiple 을 출력한다.
            std::cout << "multiple\n";
        }
        // 아니면
        else {
            // neither 를 출력한다.
            std::cout << "neither\n";
        }
    }
    return 0;
}
