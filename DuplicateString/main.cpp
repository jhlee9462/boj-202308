#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 정수 t를 입력받는다.
    int t;
    std::cin >> t;
    // t만큼 반복하여 정수 r과 문자열 s를 입력받는다.
    for (int i = 0; i < t; ++i) {
        int r;
        std::string s;
        std::cin >> r >> s;
        // s.length() 만큼 반복하여 s.at(j)를 r번 출력한다.
        for (int j = 0; j < s.length(); ++j) {
            for (int k = 0; k < r; ++k) {
                std::cout << s.at(j);
            }
        }
        std::cout << ((i == t - 1) ? "" : "\n");
    }
    return 0;
}
