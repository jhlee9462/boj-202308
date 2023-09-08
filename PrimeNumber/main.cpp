#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // m, n 을 입력받는다.
    int m, n;
    std::cin >> m >> n;
    // total 을 0으로 초기화한다.
    int total = 0;
    // min 을 0으로 초기화한다.
    int min = 0;
    // m 부터 n 까지 반복한다.
    for (int i = m; i <= n; ++i) {
        // f 를 true 로 초기화한다.
        bool f = true;
        if (i == 1)
            continue;
        if (i == 2) {
            min = 2;
            total += 2;
            continue;
        }
        // 2 부터 i / 2 + 1 까지 반복한다.
        for (int j = 2; j <= i / 2 + 1; ++j) {
            // i % j == 0 이면
            if (i % j ==0) {
                // f = false
                f = false;
                // break 한다.
                break;
            }
        }
        // f가 true면
        if (f) {
            // total이 0이면
            if (total == 0)
                // min = i
                min = i;
            // total += i
            total += i;
        }
    }
    // total 이 0이면
    if (total == 0) {
        // -1 를 출력하고 종료한다.
        std::cout << -1;
        return 0;
    }
    // total 을 출력하고 다음줄에 min을 출력한다.
    std::cout << total << '\n' << min;
    return 0;
}
