#include <iostream>

int main() {
    // 연도를 입력받는다
    int year;
    std::cin >> year;
    bool is_yoon = false;
    // 연도가 400의 배수 또는 연도가 100의 배수가 아니면서 4의 배수라면 윤년이다
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        is_yoon = true;
    // 아니라면 윤년이 아니다.
    std::cout << is_yoon << std::endl;

    return 0;
}
