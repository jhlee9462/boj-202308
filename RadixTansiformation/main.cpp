#include <iostream>
#include <cmath>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 수 n을 입력받는다. 진법 b를 입력받는다.
    std::string n;
    int b;
    std::cin >> n >> b;
    // result 를 0으로 초기화한다.
    long result = 0;
    // n.length 만큼 반복한다.
    for (int i = 0; i < n.length(); ++i) {
        // radix를 선언한다.
        int radix;
        // n.at(i) 가 A와 Z 사이면 
        char &c = n.at(i);
        if (c >= 'A' && c <= 'Z') {
            // 'A'를 빼고 10을 더한 값을 radix에 담는다.
            radix = c - 'A' + 10;
        // 아니면
        } else {
            // radix에 n.at(i) - '0'을 담는다.
            radix = c - '0';
        }
        // radix에 std::pow(b, n.length - i - 1)를 곱한 값을 result에 더한다.
        result += (long) std::pow(b, n.length() - i - 1) * radix;
    }
    // result 를 출력한다.
    std::cout << result;
    return 0;
}
