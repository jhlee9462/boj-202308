#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 층 수 n을 입력받는다.
    int n;
    std::cin >> n;
    // n 번 반복하여 층을 찍는다.
    for (int i = 0; i < n; ++i) {
        // n - i - 1 만큼 공백을 찍고 i + 1 만큼 별을 찍는다.
        for (int j = 0; j < n - i - 1; ++j) {
            std::cout << " ";
        }
        for (int j = 0; j < i + 1; ++j) {
            std::cout << "*";
        }
        if (i == n - 1)
            break;
        // 개행문자를 찍는다.
        std::cout << "\n";
    }
    return 0;
}
