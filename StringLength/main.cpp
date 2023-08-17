#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 단어 s를 입력받는다.
    std::string s;
    std::cin >> s;
    // 단어의 길이를 출력한다.
    std::cout << s.length();
    return 0;
}
