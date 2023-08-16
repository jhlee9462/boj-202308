#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // n을 입력받아 길이가 n인 배열을 생성한다.
    int n;
    std::cin >> n;
    int *array = new int[n];
    // n만큼 반복하여 입력받아 배열에 담고
    for (int i = 0; i < n; ++i) {
        std::cin >> array[i];
    }
    // v를 입력받고 배열을 순회하며 count를 센다.
    int v;
    int count = 0;
    std::cin >> v;
    for (int i = 0; i < n; ++i) {
        if (v == array[i])
            ++count;
    }
    std::cout << count;
    return 0;
}
