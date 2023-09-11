#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // x, y, w, h 를 입력받는다.
    int x, y, w, h;
    std::cin >> x >> y >> w >> h;
    // w - x, x, h - y, y 중 최솟값을 출력한다.
    int min = w - x;
    min = min > x ? x : min;
    min = min > h - y ? h - y : min;
    min = min > y ? y : min;
    std::cout << min;
    return 0;
}
