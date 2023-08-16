#include <iostream>


int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 테스트케이스의 개수 t를 입력받는다.
    int t;
    std::cin >> t;
    // t만큼 반복하여 a, b 를 입력받아 더한 값을 출력한다.
    for (int i = 0; i < t; ++i) {
        int a, b;
        std::cin >> a >> b;
        std::cout << a + b << "\n";
    }
    return 0;
}
