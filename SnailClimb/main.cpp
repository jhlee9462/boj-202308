#include <iostream>
#include <cmath>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 낮에 오르는 높이 a, 밤에 미끄러지는 높이 b, 나무의 높이 v 를 입력받는다.
    long a, b, v;
    std::cin >> a >> b >> v;
    // v 에서 a 를 뺀 값을 a - b 로 나누고 올림하여 1 을 더한 값을 출력한다.
    std::cout << (int) std::ceil((v - a) / ((double) a - b)) + 1;
    return 0;
}
