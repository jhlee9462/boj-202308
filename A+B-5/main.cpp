#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 첫 a, b를 입력받는다.
    int f_a, f_b;
    std::cin >> f_a >> f_b;
    // f_a + f_b를 f_result에 담는다.
    int f_result = f_a + f_b;
    // f_result가 0이면 프로그램 종료
    if (!f_result)
        return 0;
    // f_result를 출력한다.
    std::cout << f_result;
    // 무한 반복으로 a, b를 입력받는다.
    while (true) {
        int a, b;
        std::cin >> a >> b;
        // a + b를 result 에 담는다.
        int result = a + b;
        // result 가 0이면 break
        if (!result)
            break;
        // result 를 출력한다.
        std::cout << "\n" << result;
    }
    return 0;
}
