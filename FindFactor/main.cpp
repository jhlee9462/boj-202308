#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n 과 k 를 입력받는다.
    int n, k;
    std::cin >> n >> k;
    // k 가 1 이면 1을 출력하고 종료한다.
    if (k-- == 1) {
        std::cout << 1;
        return 0;
    }
    // 2 부터 n / 2 까지 반복한다.
    for (int i = 2; i <= n / 2; ++i) {
        // n % i == 0 이면
        if (n % i == 0) {
            // --k 하고 k 가 0이면
            if (--k == 0) {
                // i 를 출력하고 종료한다.
                std::cout << i;
                return 0;
            }
        }
    }
    // --k 하고 k 가 0이면
    if (--k == 0) {
        // n 을 출력하고 종료한다.
        std::cout << n;
        return 0;
    }
    // 0 을 출력한다.
    std::cout << 0;
    return 0;
}
