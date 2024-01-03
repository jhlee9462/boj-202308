#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 무한 반복
    while (true) {
        // 세 변의 길이를 담을 vector edge_vector를 초기화
        auto edge_vector = new std::vector<int>;
        // 중복을 계산할 set edge_set을 초기화
        auto edge_set = new std::set<int>;
        // 세 번 반복
        for (int i = 0; i < 3; ++i) {
            int edge;
            // 정수 입력받아 edge_vector에 저장
            std::cin >> edge;
            edge_vector->push_back(edge);
            edge_set->insert(edge);
        }
        // edge_vector를 내림차순으로 정렬
        std::sort(edge_vector->rbegin(), edge_vector->rend());
        // 0번 인덱스가 0이면
        if (edge_vector->at(0) == 0) {
            // break
            break;
        }
        // 1번, 2번 아이템의 합이 0번 아이템보다 작다면
        std::string result;
        if (edge_vector->at(1) + edge_vector->at(2) <= edge_vector->at(0)) {
            result = "Invalid";
        } else {
            // edge_set의 길이에 따라 결과를 출력한다.
            switch (edge_set->size()) {
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
        }
        std::cout << result << std::endl;
    }
    return 0;
}
