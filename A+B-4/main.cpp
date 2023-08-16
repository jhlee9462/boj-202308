#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int a, b;
    while (true) {
        // 무한 반복으로 a, b를 입력받는다.
        std::cin >> a >> b;
        // cin.eof()를 사용하여 입력받은 값이 없으면 프로그램을 종료한다.
        if (std::cin.eof())
            break;
        // a + b를 출력한다.
        std::cout << a + b << std::endl;
    }
    return 0;
}
