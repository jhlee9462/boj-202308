#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n과 m을 입력받는다.
    int n, m;
    std::cin >> n >> m;
    // 크기가 n인 배열 buckets를 생성한다.
    int *buckets = new int[n];
    // m번 반복하여 세 수 i j k를 입력받는다.
    for (int l = 0; l < m; ++l) {
        int i, j, k;
        std::cin >> i >> j >> k;
        // buckets[i - 1]부터 buckets[j - 1]까지 k를 대입한다.
        for (int i1 = 0; i1 < j - i + 1; ++i1) {
            buckets[i + i1 - 1] = k;
        }
    }
    // buckets의 요소를 공백으로 구분하여 출력한다.
    std::cout << buckets[0];
    for (int i = 0; i < n - 1; ++i) {
        std::cout << " " << buckets[i + 1];
    }
    return 0;
}
