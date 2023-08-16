#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 길이가 30인 bool 배열을 생성한다.
    bool *arr = new bool[30];
    // 28번 반복하여 입력받는다.
    for (int i = 0; i < 28; ++i) {
        int num;
        std::cin >> num;
        // 입력받은 수 - 1의 인덱스의 요소를 true로 바꾼다.
        arr[num - 1] = true;
    }
    // 30번 반복하여 false인 요소의 인덱스 + 1을 출력한다.
    for (int i = 0; i < 30; ++i) {
        if (!arr[i])
            std::cout << i + 1 << std::endl;
    }
    return 0;
}
