#include <iostream>
#include <set>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 단어 수 n을 입력받는다.
    int n;
    std::cin >> n;
    // 정수 cnt를 0으로 초기화한다.
    int cnt = 0;
    // n번 반복한다.
    int i = 0;
    continue_outer_for:
    for (; i < n; ++i) {
        // 단어 s를 입력받는다.
        std::string s;
        std::cin >> s;
        // set<char> c_set을 생성한다.
        auto *c_set = new std::set<char>;
        // c_set에 s.at(0)을 담는다.
        c_set->insert(s.at(0));
        // s.length() - 1 만큼 반복한다.
        for (int j = 1; j < s.length(); ++j) {
            // s.at(j)와 s.at(j - 1)이 다르고 s.at(j)를 c_set에 담고 이미 셋에 있을 경우 outer를 continue 한다.
            char &c = s.at(j);
            if (c != s.at(j - 1) && !c_set->insert(c).second) {
                ++i;
                goto continue_outer_for;
            }
        }
        // ++cnt한다.
        ++cnt;
    }
    // cnt를 출력한다.
    std::cout << cnt;
    return 0;
}
