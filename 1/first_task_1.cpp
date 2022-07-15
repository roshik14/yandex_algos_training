#include <iostream>
#include <cstring>

int find_most_common(const char *str) {
    int count = 0;
    int len = strlen(str);
    for (auto i = 0; i < len; ++i) {
        int curr_count = 0;
        for (auto j = i+1; j < len; ++j) {
            if (str[i] == str[j]) {
                ++curr_count;
            }
        }
        if (curr_count > count)
            count = i;
    }
    return count;
}

int main() {
    const char *s = "aaabab";
    int res = find_most_common(s);
    std::cout << s[res] << std::endl;
    return 0;
}
