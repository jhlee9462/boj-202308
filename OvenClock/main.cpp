#include <iostream>

int main() {
    // 현재시각 h, m, 요리에 필요한 시간 required_m 을 입력받는다.
    int h, m, required_m;
    std::cin >> h >> m >> required_m;
    // m + required_m 을 result_m 변수에 담는다
    int result_m = m + required_m;
    // result_m을 60으로 나눈 몫을 quotient, 나머지를 result_m에 담는다.
    int quotient = result_m / 60;
    result_m = result_m % 60;
    // h + quotient를 result_h에 담고 24이상이면
    int result_h = h + quotient;
    if (result_h >= 24)
        // result_h에서 24를 뺀다. (required_m이 0에서 1000까지이므로 하루 이상이 걸리지는 않기 때문)
        result_h -= 24;
    std::cout << result_h << ' ' << result_m;
    return 0;
}
