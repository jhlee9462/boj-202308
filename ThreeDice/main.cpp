#include <iostream>

int main() {
    // 3개의 눈을 eyes 배열에 입력받는다.
    int *eyes = new int[3];
    for (int i = 0; i < 3; ++i) {
        std::cin >> eyes[i];
    }
    // 3개가 모두 같은 경우
    if (eyes[0] == eyes[1] && eyes[1] == eyes[2]) {
        // eyes[0] * 1000 + 10000을 출력하고 함수를 끝낸다.
        std::cout << eyes[0] * 1000 + 10000;
        return 0;
    }
    int prise, max;
    bool is_pair = false;
    // 반복문으로 각각 비교하여 같다면 eyes[i] * 100 + 1000을 prise에 저장하고
    for (int i = 0; i < 3; ++i) {
        if (eyes[i] == eyes[(i + 1) % 3]) {
            prise = eyes[i] * 100 + 1000;
            is_pair = true;
            break;
        }
        // 아닌경우 큰 값을 max에 담는다.
        max = max > eyes[i] ? max : eyes[i];
    }
    // 아니라면 prise에 max * 100을 저장한다.
    if (!is_pair)
        prise = max * 100;
    // prise를 출력한다.
    std::cout << prise;
    return 0;
}
