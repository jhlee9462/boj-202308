#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 문자열 s를 입력받는다.
    std::string s;
    std::cin >> s;
    // s.length() / 2 만큼 반복한다.
    auto length = s.length();
    for (int i = 0; i < length / 2; ++i) {
        // s.at(i)와 s.at(s.length() - i - 1)가 같지 않으면 0을 출력하고 종료한다.
        if (s.at(i) != s.at(length - i - 1)) {
            std::cout << 0;
            return 0;
        }
    }
    // 1을 출력한다.
    std::cout << 1;
    return 0;
}
