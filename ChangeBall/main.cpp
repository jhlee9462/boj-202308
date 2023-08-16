#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n과 m을 입력받는다.
    int n, m;
    std::cin >> n >> m;
    // 길이가 n인 배열을 생성하고
    int *arr = new int[n];
    // n번 반복하여 인덱스 + 1의 값으로 초기화한다.
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }
    // m번 반복하여 i와 j를 입력받는다.
    for (int k = 0; k < m; ++k) {
        int i, j;
        std::cin >> i >> j;
        // 배열의 i - 1 요소와 j - 1요소를 서로 바꾼다.
        int temp = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = temp;
    }
    // 배열의 요소를 공백으로 구분하여 출력한다.
    std::cout << arr[0];
    for (int i = 1; i < n; ++i) {
        std::cout << " " << arr[i];
    }
    return 0;
}
