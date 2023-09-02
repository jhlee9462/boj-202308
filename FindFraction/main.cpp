#include <iostream>
#include <cmath>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // long 타입 x 를 입력받는다.
    long x;
    std::cin >> x;
    // 분모와 분자의 합이 짝수이면 n - 1 / 1 에서 시작하여 분모는 1씩 증가, 분자는 1씩 감소한다. - 분자가 1이 될때까지
    // 홀수이면 1 / n - 1 에서 시작하여 분모는 1씩 감소, 분자는 1씩 증가한다. - 분모가 1이 될때까지
    // 1 부터 n 까지의 합 t 를 1로 초기화한다.
    long t = 1;
    int n = 1;
    // x 가 t 보다 클 때 반복한다.
    while (x > t) {
        ++n;
        // t 에 (std::pow(n, 2) + n++) / 2 를 대입한다.
        t = ((long) std::pow(n, 2) + n) / 2;
    }
    // 분모와 분자의 합 l 을 n + 1로 초기화한다.
    int l = n + 1;
    // 분모 m 과 분자 s 를 초기화한다.
    int m, s;
    // l 이 홀수이면
    if (l % 2 != 0) {
        // m = 1, s = l - 1
        m = 1;
        s = l - 1;
        // t - x 만큼 반복한다.
        for (int i = 0; i < t - x; ++i) {
            // ++m, --s
            ++m;
            --s;
        }
    }
    // 아니면
    else {
        // m = l - 1, s = 1
        m = l - 1;
        s = 1;
        // t - x 만큼 반복한다.
        for (int i = 0; i < t - x; ++i) {
            // ++s, --m
            ++s;
            --m;
        }
    }
    // s '/' m 을 차례로 출력한다.
    std::cout << s << '/' << m;
    return 0;
}
