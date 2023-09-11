#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // a 와 b 를 입력받는다.
    int a, b;
    std::cin >> a >> b;
    // a * b 를 출력한다.
    std::cout << a * b;
    return 0;
}
