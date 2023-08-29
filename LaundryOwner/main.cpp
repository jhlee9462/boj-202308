#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 테스트 케이스의 수 t를 입력받는다.
    int t;
    std::cin >> t;
    // 길이가 4인 정수 배열 arr을 생성한다.
    int arr[4];
    // 배열 coin을 {25, 10, 5} 로 초기화한다.
    int coin[] = {25, 10, 5};
    // t만큼 반복한다.
    for (int i = 0; i < t; ++i) {
        // 거스름돈 c를 입력받는다.
        int c;
        std::cin >> c;
        // 3번 반복한다.
        for (int j = 0; j < 3; ++j) {
            // c를 coin[j]으로 나눈 몫을 arr[j]에 대입한다.
            arr[j] = c / coin[j];
            // 나머지를 c에 대입한다.
            c = c % coin[j];
        }
        // arr[3]에 c를 대입한다.
        arr[3] = c;
        // 4번 반복한다.
        for (int j = 0; j < 4; ++j) {
            // arr[j]를 출력한다.
            std::cout << arr[j] << (j == 3 ? '\n' : ' ');
        }
    }
    return 0;
}
