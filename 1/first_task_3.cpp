#include <iostream>
#include <cstring>
#include <map>

char find_most_common(const char *str, int *count) {
    int len = strlen(str);
    char c = 0;
    std::map<char, int> dictionary;
    for (auto i = 0; i < len; ++i) {
        char curr = str[i];
        if (dictionary.find(curr) == dictionary.end())
            dictionary[curr] = 0;
        dictionary[curr] += 1;
    }
    for (auto i = dictionary.begin(); i != dictionary.end(); ++i) {
        if (i->second > *count) {
            *count = i->second;
            c = i->first;
        }
    }
    return c;
}

int main() {
    const char *s = "";
    int count = 0;
    char res = find_most_common(s, &count);
    std::cout << res << ' ' << count << std::endl;
    return 0;
}
