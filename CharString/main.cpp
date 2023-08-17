#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 단어 s를 입력받는다.
    std::string s;
    // 정수 i를 입력받는다.
    int i;
    std::cin >> s >> i;
    // i - 1번째 인덱스의 글자를 출력한다.
    std::cout << s.at(i - 1);
    return 0;
}
