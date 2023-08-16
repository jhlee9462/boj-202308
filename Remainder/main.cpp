#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    auto *remainder = new std::set<int>();
    // 10번 반복하여 수를 입력받고 42로 나눈 나머지를 set에 담는다.
    for (int i = 0; i < 10; ++i) {
        int num;
        std::cin >> num;
        remainder->insert(num % 42);
    }
    // set의 길이를 출력한다.
    std::cout << remainder->size();
    return 0;
}
