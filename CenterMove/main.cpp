#include <iostream>
#include <cmath>

int get_nth_point(const int& n);

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n을 입력받는다.
    int n;
    std::cin >> n;
    // n번째의 한 변에 위치하는 점의 수 = (n - 1번째의 점의 수) + (n - 1번째의 점의 수 - 1)
    // 위의 계산결과의 제곱을 한다.
    std::cout << (int) std::pow(get_nth_point(n), 2);
    return 0;
}

int get_nth_point(const int& n) {
    if (n == 0) return 2;
    return get_nth_point(n - 1) * 2 - 1;
}