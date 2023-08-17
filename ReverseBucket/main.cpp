#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n과 m을 입력받는다.
    int n, m;
    std::cin >> n >> m;
    // 길이가 n인 배열을 각 요소가 인덱스 + 1이 되도록 초기화한다.
    int *arr = new int[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1;
    }
    // m번 반복하여 i와 j를 입력받는다.
    for (int k = 0; k < m; ++k) {
        int i, j;
        std::cin >> i >> j;
        // 길이가 j - i + 1인 임시 배열을 만들어 임시배열[idx] = 배열[j - 1 - idx] 로 역순으로 복사한다.
        int length = j - i + 1;
        int *temp = new int[length];
        for (int l = 0; l < length; ++l) {
            temp[l] = arr[j - 1 - l];
        }
        // 다시 배열[i - 1 + idx] = 임시배열[idx]로 기존 배열을 바꾼다.
        for (int l = 0; l < length; ++l) {
            arr[i - 1 + l] = temp[l];
        }
    }
    // 배열을 출력한다.
    std::cout << arr[0];
    for (int i = 0; i < n - 1; ++i) {
        std::cout << " " << arr[i + 1];
    }
    return 0;
}
