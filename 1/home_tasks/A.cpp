#include <iostream>

int main() {
  int end_code = 0;
  int interactor_verdict = 0;
  int checker_verdict = 0;
  std::cin >> end_code;
  std::cin >> interactor_verdict;
  std::cin >> checker_verdict;
  int result = 0;
  if (!interactor_verdict) {
    if (end_code)
      result = 3;
    else
      result = checker_verdict;
  } else if (interactor_verdict == 1) {
    result = checker_verdict;
  } else if (interactor_verdict == 4) {
    if (end_code)
      result = 3;
    else
      result = 4;
  } else if (interactor_verdict == 6) {
    result = 0;
  } else if (interactor_verdict == 7) {
    result = 1;
  } else {
    result = interactor_verdict;
  }
  std::cout << result << std::endl;

}
