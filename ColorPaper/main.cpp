#include <iostream>
#include <bitset>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 색종이 수 n 을 입력받는다.
    int n;
    std::cin >> n;
    // bitset<100>[100] 배열 arr을 만든다.
    std::bitset<100> arr[100];
    // n 만큼 반복한다.
    for (int i = 0; i < n; ++i) {
        // x, y를 입력받는다.
        int x, y;
        std::cin >> x >> y;
        // 10번 반복한다.
        for (int j = 0; j < 10; ++j) {
            // 10번 반복한다.
            for (int k = 0; k < 10; ++k) {
                // arr[j].set(k) 한다.
                arr[j + x].set(k + y);
            }
        }
    }
    // total을 0으로 초기화한다.
    int total = 0;
    // 100 번 반복한다.
    for (auto i : arr) {
        // 100번 반복한다.
        for (int j = 0; j < 100; ++j) {
            if (i.test(j))
                ++total;
        }
    }
    // total을 출력한다.
    std::cout << total;
    return 0;
}
