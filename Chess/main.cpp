#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // {1, 1, 2, 2, 2, 8} 배열을 만든다.
    int arr[] = {1, 1, 2, 2, 2, 8};
    // 6번 반복하여 입력받은 값을 배열[i]에서 뺀 값을 출력한다.
    for (int i = 0; i < 6; ++i) {
        int num;
        std::cin >> num;
        std::cout << arr[i] - num << (i != 5 ? " " : "");
    }
    return 0;
}
