#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n 을 입력받는다.
    int n;
    std::cin >> n;
    // p 를 0으로 초기화한다.
    int p = 0;
    // n 만큼 반복한다. -- outer
    for (int i = 0; i < n; ++i) {
        // 수 a 를 입력받는다.
        int a;
        std::cin >> a;
        if (a == 2 || a == 3) {
            ++p;
            continue;
        }
        // 2 부터 a / 2 까지 반복한다.
        for (int j = 2; j <= a / 2; ++j) {
            // a % j == 0 이면 break
            if (a % j == 0) break;
            // j == a / 2 이면 ++p
            if (j == a / 2) ++p;
        }
    }
    // p 를 출력한다.
    std::cout << p;
    return 0;
}
