#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // max를 0으로 초기화한다.
    int max = 0;
    // x, y를 0으로 초기화한다.
    int x = 0;
    int y = 0;
    // 9번 반복한다.
    for (int i = 0; i < 9; ++i) {
        // 9번 반복하여 입력받고 max와 바교하여 더 크면 max에 대입하고 x = i, y = i으로 대입한다.
        for (int j = 0; j < 9; ++j) {
            int num;
            std::cin >> num;
            if (max < num) {
                max = num;
                x = i;
                y = j;
            }
        }
    }
    // max를 출력하고 개행한다.
    std::cout << max << "\n" << x + 1 << " " << y + 1;
    // x + 1를 출력하고 공백을 출력하고 y + 1를 출력한다.
    return 0;
}
