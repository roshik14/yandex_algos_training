#include <iostream>
#include <set>
#include <string>
#include <cctype>
#include <sstream>

void solution(const std::string &s) {
    std::set<int> numbers;
    std::stringstream ss(s);
    int num = 0;
    while (ss >> num) {
        if (!numbers.count(num)) {
            numbers.insert(num);
            std::cout << "NO" << std::endl;
        } else {
            std::cout << "YES" << std::endl;
        }
    }
}


std::string input() {
    std::string s;
    std::getline(std::cin, s);
    return s;
}

int main() {
    std::string s = input();
    solution(s);
    return 0;
}

