#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 정수 count 를 0 으로 초기화한다.
    int count = 0;
    // cin.eof()까지 입력받는다.
    while (true) {
        std::string s;
        std::cin >> s;
        if (std::cin.eof())
            break;
        ++count;
    }
    std::cout << count;
    return 0;
}
