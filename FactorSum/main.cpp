#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 무한 반복한다.
    while (true) {
        // n 을 입력받는다.
        int n;
        std::cin >> n;
        // n == -1 이면 break 한다.
        if (n == -1)
            break;
        // total 을 1 로 초기화한다.
        int total = 1;
        // 약수들을 담을 벡터 v 를 생성한다.
        std::vector<int> v;
        // 2 부터 n / 2 까지 반복한다.
        for (int i = 2; i <= n / 2; ++i) {
            // n % i == 0 이면
            if (n % i == 0) {
                // total 에 i 를 더한다.
                total += i;
                // v 에 i 를 담는다.
                v.push_back(i);
            }
        }
        // total != n 이면
        if (total != n) {
            // n + " is NOT perfect.\n" 를 출력한다.
            std::cout << n << " is NOT perfect.\n";
            // continue
            continue;
        }
        // n + " = 1" 을 출력한다.
        std::cout << n << " = 1";
        // v 를 순회하며 " + " + 요소 를 출력한다.
        for (const auto &item: v) {
            std::cout << " + " << item;
        }
        // 개행한다.
        std::cout << "\n";
    }
    return 0;
}
