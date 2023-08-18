#include <iostream>
#include <map>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 문자열 s를 입력받는다.
    std::string s;
    std::cin >> s;
    // 문자 max를 s.at(0)로 초기화한다.
    auto *pMap = new std::map<char, int>();
    // s.length() 만큼 반복하여 s.at(i)를 대문자로 바꾸고
    for (char i: s) {
        char c = (char) toupper(i);
        // map<char, int>에 담아 어느 단어가 몇개 사용됐는지 확인한다.
//        pMap->insert(std::pair(c, (pMap->find(c) == pMap->end() ? 0 : pMap->find(c)->second) + 1));
        if (pMap->find(c) == pMap->end()) {
            pMap->insert(std::pair(c, 1));
            continue;
        }
        ++pMap->find(c)->second;
    }
    // map을 값으로 정렬한다.
    // map을 vector로 이동
    std::vector<std::pair<char, int>> vector(pMap->begin(), pMap->end());
    // vector를 second 기준으로 정렬
    std::sort(vector.begin(), vector.end(), [](const auto &x, const auto &y) {
        return x.second > y.second;
    });
    // 단어가 하나뿐이면 그것을 출력하고
    if (s.length() == 1) {
        std::cout << vector.at(0).first;
        return 0;
    }
    // 첫 번째 단어와 두 번째 단어의 값이 값으면 ?를 출력하고
    if (vector.at(0).second == vector.at(1).second) {
        std::cout << '?';
        return 0;
    }
    // 아니면 첫 번째 단어를 출력한다.
    std::cout << vector.at(0).first;
    return 0;
}
