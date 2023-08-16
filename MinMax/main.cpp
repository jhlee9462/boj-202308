#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 정수 갯수 n을 입력받는다.
    int n;
    std::cin >> n;
    // 첫 번째 수를 입력받고 최솟값과 최댓값에 대입한다.
    int min, max;
    std::cin >> min;
    max = min;
    // n - 1만큼 반복하여 정수를 입력받고 최솟값과 최댓값과 비교한다.
    for (int i = 0; i < n - 1; ++i) {
        int num;
        std::cin >> num;
        max = num > max ? num : max;
        min = num < min ? num : min;
    }
    std::cout << min << " " << max << std::endl;
    return 0;
}
