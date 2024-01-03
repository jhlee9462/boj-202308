#include <iostream>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 막대의 길이를 저장할 길이가 3인 int 배열 stick_arr 초기화
    auto stick_arr = new int[3];
    // 세 번 반복
    for (int i = 0; i < 3; ++i) {
        // 막대길이를 입력받아 stick_arr[i]에 저장
        std::cin >> stick_arr[i];
    }
    // stick_arr을 오름차순으로 정렬
    std::sort(stick_arr, stick_arr + 3);
    // 0번 1번 아이템의 합이 2번 아이템보다 크다면
    auto sum0_1 = stick_arr[0] + stick_arr[1];
    int result;
    if (sum0_1 > stick_arr[2]) {
        // 아이템들의 전체 합을 결과에 저장
       result = sum0_1 + stick_arr[2];
    } else {
    // 작다면
        // 2번 값에서 0, 1 번의 합을 뺀 값 + 1을 전체 합에서 뺀 값
        // (0, 1번의 합 * 2) - 1을 결과에 저장
        result = 2 * sum0_1 - 1;
    }
    // 결과를 출력
    std::cout << result << std::endl;
    return 0;
}
