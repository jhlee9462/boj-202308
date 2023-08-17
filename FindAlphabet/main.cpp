#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 문자열 s를 입력받는다.
    std::string s;
    std::cin >> s;
    // 23번 반복하여 각 알파벳이 처음 등장하는 위치를 공백으로 구분하여 출력한다.
    for (char i = 'a'; i <= 'z'; ++i) {
        std::cout << (int) s.find(i) << ((i == 'z') ? "" : " ");
    }
    return 0;
}
