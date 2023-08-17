#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 문자열 s를 입력받는다.
    std::string s;
    std::cin >> s;
    // 정수 t를 0으로 초기화한다.
    int t = 0;
    // s.length() 만큼 반복한다.
    for (int i = 0; i < s.length(); ++i) {
        // s.at(i) - 'A'를 3으로 나눈 값을 q에 저장한다.
        char c = s.at(i);
        int q = (c - 'A') / 3;
        // q가 5보다 작으면
        if (q < 5)
            // t에 q + 3을 더한다.
            t += q + 3;
        // 아니고 s.at(i)가 P와 S 사이이면
        else if (c >= 'P' && c <= 'S')
            // t에 8을 더한다.
            t += 8;
        // 아니고 s.at(i)가 T와 V 사이이면
        else if (c >= 'T' && c <= 'V')
            // t에 9를 더한다.
            t += 9;
        // 아니면
        else
            // t에 10을 더한다.
            t += 10;
    }
    // t를 출력한다.
    std::cout << t;
    return 0;
}
