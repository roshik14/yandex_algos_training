#include <iostream>
#include <vector>

void read_input(std::vector<int> *v) {
  int x = 0;
  while (true) {
    std::cin >> x;
    if (!x) {
      break;
    }
    v->push_back(x);
  }
}

int find_max(const std::vector<int> &v) {
  int max = v[0];
  for (auto i = v.begin(); i != v.end(); ++i) {
    if (*i > max) {
      max = *i;
    }
  }
  return max;
}

int main() {
  std::vector<int> list;
  read_input(&list);
  int max = find_max(list);
  int count = 0;
  for (auto i = 0; i < list.size(); ++i) {
    if (list[i] == max)
      ++count;
  }
  std::cout << count;
}
