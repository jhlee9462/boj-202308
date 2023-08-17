#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n을 입력받는다.
    int n;
    std::cin >> n;
    // 2 * n - 1번 반복하여
    for (int i = 0; i < 2 * n - 1; ++i) {
        // abs(n - i - 1)번의 공백을 찍고
        for (int j = 0; j < abs(n - i - 1); ++j) {
            std::cout << " ";
        }
        // 2 * n - 1 - abs(2 * (i + 1) - 2 * n)의 별을 찍고 개행
        for (int j = 0; j < 2 * n - 1 - abs(2 * (i + 1) - 2 * n); ++j) {
            std::cout << "*";
        }
        if (i == 2 * n - 2)
            break;
        std::cout << "\n";
    }
    return 0;
}
