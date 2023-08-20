#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 문자열 s를 입력받는다.
    std::string s;
    std::cin >> s;
    // 정수 d를 0으로 초기화한다.
    int d = 0;
    // s.length()만큼 반복한다.
    for (int i = 0; i < s.length(); ++i) {
        // 문자가 -면
        char &c = s.at(i);
        try {
            if (c == '-' || (c == 'j' && ((s.at(i - 1) == 'l') || s.at(i - 1) == 'n')))
                // d에 1 추가한다.
                ++d;
                // 문자가 =고
            else if (c == '=') {
                // 그 앞 글자들이 dz이면
                try {
                    if (s.at(i - 1) == 'z' && s.at(i - 2) == 'd') {
                        // d에 2 추가한다.
                        d += 2;
                    } else {
                        // 아니면
                        // d에 1 추가한다.
                        ++d;
                    }
                } catch (...) {
                    ++d;
                }
                // 문자가 j고 그 앞 글자가 l 또는 n이면
            }
        } catch (...) {
        }
    }
    // s.length()에서 d를 뺀 값을 출력한다.
    std::cout << s.length() - d;
    return 0;
}
