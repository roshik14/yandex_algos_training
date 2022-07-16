#include <iostream>
#include <string>
#include <cctype>
#include <sstream>
#include <map>

void solution(const std::string &s) {
    std::map<int, int> numbers;
    int num = 0;
    std::stringstream ss(s);
    while (ss >> num) {
        numbers[num] += 1;
    }
    std::stringstream ss2(s);
    while (ss2 >> num) {
        if (numbers[num] == 1)
            std::cout << num << ' ';
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

