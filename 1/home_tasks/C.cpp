#include <iostream>

int main() {
  int x, y, z;
  std::cin >> x >> y >> z;
  if ((x > 12 || y > 12) || (x == y))
    std::cout << 1;
  else
    std::cout << 0;
  return 0;
}
