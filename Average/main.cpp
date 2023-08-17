#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n을 입력받는다.
    int n;
    std::cin >> n;
    // max를 입력받고 total도 해당 값으로 초기화한다.
    int max;
    std::cin >> max;
    int total = max;
    // n - 1만큼 반복하여 입력받고 total에 더한다.
    for (int i = 0; i < n - 1; ++i) {
        int num;
        std::cin >> num;
        total += num;
        // max보다 크다면 max를 해당 값으로 대입한다.
        if (num > max)
            max = num;
    }
    // total에서 max를 뺀 값을 max로 나누고 100을 곱하고 max를 더한 값을 n으로 나눈다.
    double avg = (total * 100 / (double) max) / (double) n;
    // 해당 값을 출력한다.
    std::cout.precision(14);
    std::cout << avg;
    return 0;
}
