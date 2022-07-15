#include <iostream>
#include <set>
#include <string>
#include <cctype>

std::set<int> strToSet(const std::string &s) {
    std::set<int> numbers;
    for (size_t i = 0; i != s.size(); ++i) {
        if (std::isdigit(s[i])) {
            size_t length = 0;
            numbers.insert(std::stoi(s.substr(i), &length));
            i += length - 1;
        }
    }
    return numbers;
}

std::set<int> input() {
    std::string s;
    std::getline(std::cin, s);
    return strToSet(s);
}

int countNumbers(const std::set<int> &s1, const std::set<int> &s2) {
    int count = 0;
    auto itte = s2.end();
    for (auto itb = s1.begin(), ite = s1.end(); itb != ite; ++itb) {
        if (s2.find(*itb) != itte) {
            ++count;
        }
    }
    return count;
}

int main() {
    std::set<int> s1 = input();
    std::set<int> s2 = input();
    std::cout << countNumbers(s1, s2) << std::endl;
    return 0;
}

