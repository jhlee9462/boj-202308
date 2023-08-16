#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 테스트 케이스의 수 t를 입력받는다.
    int t;
    std::cin >> t;
    // t만큼 반복하여 a, b를 입력받고 양식에 맞추어 출력한다.
    for (int i = 1; i <= t; ++i) {
        int a, b;
        std::cin >> a >> b;
        std::cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << "\n";
    }
    return 0;
}
