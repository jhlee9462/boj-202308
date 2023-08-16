#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 입력을 하나 받고 idx를 0으로, max를 입력받은 값으로 초기화한다.
    int idx = 1;
    int max;
    std::cin >> max;
    // 8번 반복하여 입력받고 입력값이 max보다 크다면 idx를 i + 2로 max를 해당 값으로 대입한다.
    for (int i = 0; i < 8; ++i) {
        int num;
        std::cin >> num;
        if (num > max) {
            max = num;
            idx = i + 2;
        }
    }
    std::cout << max << "\n" << idx << std::endl;
    return 0;
}
