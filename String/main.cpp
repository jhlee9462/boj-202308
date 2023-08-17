#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 정수 t를 입력받는다.
    int t;
    std::cin >> t;
    // t만큼 반복하여 문자열 s를 입력받는다.
    for (int i = 0; i < t; ++i) {
        std::string s;
        std::cin >> s;
        // s.at(0)과 s.at(s.length() - 1)를 차례로 출력하고 개행한다.
        std::cout << s.at(0) << s.at(s.length() - 1) << ((i == t - 1) ? "" : "\n");
    }
    return 0;
}
