#include <iostream>
#include <string>

int count_payment(const std::string &s) {
  int payment = 0;
  int left_index = 0;
  int right_index = s.length() - 1;
  while (left_index <= right_index) {
    if (s[left_index] != s[right_index]) {
      ++payment;
    }
    ++left_index;
    --right_index;
  }
  return payment;
}

int main() {
  std::string s;
  std::cin >> s;
  std::cout << count_payment(s) << std::endl;
  return 0;
}
