#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 글자 c를 입력받는다.
    char c;
    std::cin >> c;
    // (int) c 를 출력한다.
    std::cout << (int) c;
    return 0;
}
