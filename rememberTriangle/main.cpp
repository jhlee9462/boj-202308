#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 세 각을 담을 set을 만든다.
    auto *angle_set = new std::set<int>;
    // 각의 총 합 sum을 0으로 초기화한다.
    int sum = 0;
    // 세번 반복한다.
    for (int i = 0; i < 3; ++i) {
        int angle = 0;
        // 각을 입력받고 set에 담는다.
        std::cin >> angle;
        angle_set->insert(angle);
        // sum에 더한다.
        sum += angle;
    }
    // sum이 180이 아니면 Error를 출력하고 종료한다.
    if (sum != 180) {
        std::cout << "Error" << std::endl;
        return 0;
    }
    // set의 길이에 따라 결과를 출력한다.
    std::string result;
    switch (angle_set->size()) {
        case 1:
            result = "Equilateral";
            break;
        case 2:
            result = "Isosceles";
            break;
        case 3:
            result = "Scalene";
            break;
    }
    std::cout << result << std::endl;
    delete angle_set;
    return 0;
}
