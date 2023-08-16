#include <iostream>
#include <cmath>

int main() {
    // 시와 분을 입력받는다.
    int h, m;
    std::cin >> h >> m;
    // 분에서 45를 뺀 값을 변수에 담는다.
    int alarm_h = h;
    int alarm_m = m - 45;
    // 음수라면 절대값을 취한다음 60에서 뺀다.
    if (alarm_m >> 31) {
        alarm_m = 60 - std::abs(alarm_m);
        // 시가 0이라면 23시가 된다.
        if (h == 0)
            alarm_h = 23;
        // 아니라면 시에서 1을 뺀다.
        else
            alarm_h = h - 1;
    }
    std::cout << alarm_h << ' ' << alarm_m << std::endl;
    return 0;
}
