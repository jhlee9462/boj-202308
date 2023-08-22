#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // max_length 를 1으로 초기화한다.
    unsigned long max_length = 1;
    // char*[5]인 arr을 생성한다.
    char *arr[5];
    // 5번 반복한다.
    for (auto & i : arr) {
        // 문자열 s를 입력받는다.
        std::string s;
        std::cin >> s;
        // max_length가 s.length() 보다 작다면
        unsigned long length = s.length();
        if (max_length < length)
            // max_lenght에 s.length()를 대입한다.
            max_length = length;
        // arr[i] 에 new char[s.length()]를 대입한다.
        i = new char[length];
        // s.length() 만큼 반복한다.
        for (int j = 0; j < length; ++j) {
            // arr[i][j] 에 s.at(j)를 대입한다.
            i[j] = s.at(j);
        }
    }
    // max_length만큼 반복한다.
    for (int i = 0; i < max_length; ++i) {
        // 5번 반복한다.
        for (auto & j : arr) {
            // arr[j][i] 를 출력한다.
            char c = j[i];
            // c가 '\000' 이면 continue한다.
            if (c == '\000')
                continue;
            std::cout << c;
        }
    }
    // 사용한 자원을 delete한다.
    for (auto & i : arr) {
        delete i;
    }
    return 0;
}
