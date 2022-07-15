#include <iostream>
#include <vector>

void input(std::vector<int> *list) {
  int n;
  std::cin >> n;
  for (int i = 0; i < n; ++i) {
    int k;
    std::cin >> k;
    list->push_back(k);
  }
}

int sum(const std::vector<int> &list) {
  int sum = 0;
  for (auto i = 0; i < list.size(); ++i) {
    sum += list[i];
  }
  return sum;
}

int max(const std::vector<int> &list) {
  int max = list[0];
  for (auto i = 0; i < list.size(); ++i) {
    if (list[i] > max) {
      max = list[i];
    }
  }
  return max;
}

int main() {
  std::vector<int> data;
  input(&data);
  std::cout << sum(data) - max(data) << std::endl;
}
