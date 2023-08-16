#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n과 x를 입력받는다.
    int n, x;
    std::cin >> n >> x;
    // n 번 반복하여 입력받는다. x보다 작을 때 출력한다.
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        if (num < x)
            std::cout << num << " ";
    }
    return 0;
}
