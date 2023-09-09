#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n 을 입력받는다.
    long n;
    std::cin >> n;
    // 무한 반복한다.
    while (true) {
        // 소인수가 있는지를 판단하는 불리언 b 를 false 로 초기화한다.
        bool b = false;
        // n 이 2 면 2 를 출력하고 break;
        if (n == 2) {
            std::cout << n;
            break;
        }
        // n 이 1 이면 break;
        if (n == 1)
            break;
        // 2 부터 n / 2 + 1 까지 반복한다.
        for (int i = 2; i <= n / 2 + 1; ++i) {
            // n % i == 0 이면
            if (n % i == 0) {
                // b 를 true로 바꾼다.
                b = true;
                // n /= i
                n /= i;
                // i 를 출력한다.
                std::cout << i << '\n';
                // break;
                break;
            }
        }
        // b 가 false 이면
        if (!b) {
            // n 을 출력하고 break;
            std::cout << n;
            break;
        }
    }
    return 0;
}
