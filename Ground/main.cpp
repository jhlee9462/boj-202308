#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n 을 입력받는다.
    int n;
    std::cin >> n;
    int x1, y1;
    std::cin >> x1 >> y1;
    // n 이 1 이면 0 을 출력하고 종료
    if (n == 1) {
        std::cout << 0;
        return 0;
    }
    // min_x, min_y, max_x, max_y 를 0으로 초기화한다.
    int min_x = x1, min_y = y1, max_x = x1, max_y = y1;
    // n - 1 만큼 반복한다.
    for (int i = 0; i < n - 1; ++i) {
        // x, y 를 입력받는다.
        int x, y;
        std::cin >> x >> y;
        // 각 값들과 비교하여 대입한다.
        min_x = min_x > x ? x : min_x;
        min_y = min_y > y ? y : min_y;
        max_x = max_x < x ? x : max_x;
        max_y = max_y < y ? y : max_y;
    }
    // (max_x - min_x) * (max_y - min_y) 를 출력한다.
    std::cout << (max_x - min_x) * (max_y - min_y);
    return 0;
}
