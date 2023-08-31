#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // long타입으로 n을 입력받는다.
    long n;
    std::cin >> n;
    // cnt를 1으로 초기화한다.
    int cnt = 1;
    // n에 1을 뺀다.
    --n;
    // n이 0보다 클때 반복한다.
    while (n > 0) {
        // n 에 6 * cnt를 뺀 값을 n에 대입한다.
        // cnt를 1 증가시킨다.
        n -= 6 * cnt++;
    }
    // cnt를 출력한다.
    std::cout << cnt;
    return 0;
}
