#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 단어를 입력받는다.
    std::string word;
    std::cin >> word;
    const char *char_word = word.c_str();
    // 알파벳이 몇 번 나왔는지 저장할 26길이의 int 배열을 만든다.
    int alphabet_count[26] = {0,};
    // 단어의 길이만큼 반복해서 해당하는 알파벳 index에 저장된 수를 +1 한다.
    for (int i = 0; i < word.length(); ++i) {
        char character = char_word[i];
        if (character >= 97) character -= 32;
        ++alphabet_count[character - 65];
    }
    // 최댓값이 여러 개인 경우를 표시할 flag를 초기화한다.
    bool flag = false;
    // 최댓값의 index를 저장할 char 변수를 초기화한다.
    int max_index = 0;
    // 배열을 순회하며 최댓값의 index를 구한다.
    int max = alphabet_count[0];
    for (int i = 1; i < 26; ++i) {
        int compare_word = alphabet_count[i];
        if (max > compare_word) continue;
        if (max == compare_word) {
            // 최댓값과 현재 값이 같은 경우 flag를 true로 바꾼다.
            flag = true;
        } else {
            // 아닌 경우 flag를 false로 바꾸고 최대값에 현재값을 대입한다. 최대값의 index도 저장한다.
            flag = false;
            max = compare_word;
            max_index = i;
        }
    }

    // flag 가 true 일 경우 ?를 출력한다.
    if (flag) {
        std::cout << '?' << std::endl;
        return 0;
    }
    // 최대값의 index + 65 를 출력한다.
    std::cout << char(max_index + 65) << std::endl;
    return 0;
}
