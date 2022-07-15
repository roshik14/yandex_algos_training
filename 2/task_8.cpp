#include <iostream>
#include <string>
#include <exception>

std::string rle(const std::string &str) {
  for (auto i = str.begin(); i != str.end(); ++i) {
    if (*i < 'A' || *i > 'Z')
      throw std::invalid_argument("Invalid string");
  }
  std::string result;
  for (auto i = str.begin(); i != str.end(); ++i) {

  }

}

int main() {
  std::string k
  return 0;
}
