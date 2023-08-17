#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string s;
    while (true) {
        std::getline(std::cin, s);
        if (s.empty())
            break;
        std::cout << s << std::endl;
    }
    return 0;
}
