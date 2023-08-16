#include <iostream>
#include <string>

int main() {
    // 총 금액 x와 물건 갯수 n을 입력받는다.
    int x, n;
    std::cin >> x >> n;
    // n 번의 반복을 거치며 물건가격 a와 개수 b를 입력받아 total에 더한다.
    int total = 0;
    for (int i = 0; i < n; ++i) {
        int a, b;
        std::cin >> a >> b;
        total += a * b;
    }
    std::string result = x == total ? "Yes" : "No";
    // x 와 total을 비교해 결과를 출력한다.
    std::cout << result;
    return 0;
}
