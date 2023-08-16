#include <iostream>

int main() {
    // 테스트 케이스의 갯수 t를 입력받는다.
    int t;
    std::cin >> t;
    // t번만큼 반복하여 두 수 a, b를 입력받고 합을 배열 result에 담는다..
    int *result = new int[t]();
    for (int i = 0; i < t; ++i) {
        int a, b;
        std::cin >> a >> b;
        result[i] = a + b;
    }
    // result를 반복하여 하나씩 출력한다.
    for (int i = 0; i < t; ++i) {
        std::cout << result[i] << std::endl;
    }
    return 0;
}
