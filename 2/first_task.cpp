#include <iostream>

int main() {
  int x = 5;
  int res = -1;
  const int arr[5] = {1, 2, 3, 1, 2};
  for (auto i = 0; i < 5; ++i) {
    if (arr[i] == x) {
      res = arr[i];
      break;
    }
  }
  std::cout << res << std::endl;
  return 0;
}
