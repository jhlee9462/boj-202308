#include <iostream>

int main() {
    // 바이트 크기 n을 입력받는다.
    int n;
    std::cin >> n;
    // n을 4로 나눈 몫만큼 반복하여 long을 출력하고
    int length = n / 4;
    for (int i = 0; i < length; ++i) {
        std::cout << "long ";
    }
    // int를 출력한다.
    std::cout << "int" << std::endl;
    return 0;
}
