#include <iostream>
#include <vector>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    // 10진법 수 n을 입력받는다. 바꾸고자 하는 진법 b를 입력받는다.
    int n, b;
    std::cin >> n >> b;
    // n이 0이 아닐때 반복한다.
    std::vector<int> vector;
    while (n != 0) {
        // n을 b로 나눈 나머지를 vector에 담는다.
        vector.push_back(n % b );
        // 몫을 n에 대입한다.
        n /= b;
    }
    // vector의 길이만큼 반복한다.
    for (int i = 0; i < vector.size(); ++i) {
        int &item = vector.at(vector.size() - i - 1);
        // vector의 요소가 10 이상이면 
        if (item >= 10)
            // (char) 요소 - 10 + 'A' 를 출력한다.
            std::cout << (char) (item - 10 + 'A');
        else
            // 아니면 마지막 인덱스 요소부터 출력한다.
            std::cout << item;
    }
    return 0;
}
