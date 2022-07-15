#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int points[n];
  for (auto i = 0; i < n; ++i) {
    std::cin >> points[i];
  }
  std::cout << points[n / 2] << std::endl;
}
