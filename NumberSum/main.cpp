#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 정수 n을 입력받는다.
    int n;
    // 문자열 s를 입력받는다.
    std::string s;
    std::cin >> n >> s;
    // 정수 total을 0으로 초기화한다.
    int total = 0;
    // s.length() 만큼 반복하여 (int) (s.at(i) - '0')를 total에 더한다.
    for (char i : s) {
        total += (int) (i - '0');
    }
    std::cout << total;
    return 0;
}
