#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 두 문자열 a, b를 입력받는다.
    std::string a, b;
    std::cin >> a >> b;
    char* r_a = new char[3];
    char* r_b = new char[3];
    // a와 b를 각각 뒤집은 후 strtol를 사용하여 정수로 파싱한다.
    for (int i = 0; i < 3; ++i) {
        r_a[i] = a.at(2 - i);
        r_b[i] = b.at(2 - i);
    }
    char **pEnd;
    // 더 큰 수를 출력한다.
    long i_a = strtol(r_a, pEnd, 10);
    long i_b = strtol(r_b, pEnd, 10);

    std::cout << (i_a > i_b ? i_a : i_b);

    return 0;
}
