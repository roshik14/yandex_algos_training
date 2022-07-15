#include <iostream>

int main() {
  int n, i, j;
  std:: cin >> n >> i >> j;
  int right = 0;
  int left = 0;
  if (i < j) {
    right = j - i - 1;
  } else {
    right = i - j - 1;
  }
  left = n - (right) - 2;
  int result = left < right ? left : right;
  std::cout << result << std::endl;
}
