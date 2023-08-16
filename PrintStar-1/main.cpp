#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 층의 갯수 n을 입력받는다.
    int n;
    std::cin >> n;
    // n번 반복하여 한 줄을 찍는다.
    for (int i = 0; i < n; ++i) {
        // i + 1번 반복하여 별을 찍는다.
        for (int j = 0; j < i + 1; ++j) {
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}
