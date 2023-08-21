#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 행렬의 크기 n, m을 입력받는다.
    int n, m;
    std::cin >> n >> m;
    // 이차원 배열[n][m] a, b를 생성한다.
    int **a = new int*[n];
    int **b = new int*[n];
    // n 번 반복한다.
    for (int i = 0; i < n; ++i) {
        a[i] = new int[m];
        // m 번 반복하여 a[i][j]에 입력받는다.
        for (int j = 0; j < m; ++j) {
            std::cin >> a[i][j];
        }
    }
    // n 번 반복한다.
    for (int i = 0; i < n; ++i) {
        b[i] = new int[m];
        // m 번 반복하여 b[i][j]에 입력받는다.
        for (int j = 0; j < m; ++j) {
            std::cin >> b[i][j];
        }
    }
    // n 번 반복한다.
    for (int i = 0; i < n; ++i) {
        // m 번 반복하여 a[i][j] + b[i][j]를 출력한다.
        for (int j = 0; j < m; ++j) {
            std::cout << a[i][j] + b[i][j] << (j == m - 1 ? '\n' : ' ');
        }
    }
    return 0;
}
