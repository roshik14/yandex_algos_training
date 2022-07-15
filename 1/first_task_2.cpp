#include <iostream>
#include <cstring>
#include <set>

void init_set(std::set<char> *set, const char *str, const int &len) {
    for (auto i = 0; i < len; ++i) {
        set->insert(str[i]);
    }
}

char find_most_common(const char *str, int *count) {
    int len = strlen(str);
    std::set<char> str_set;
    init_set(&str_set, str, len);
    char c;
    for (auto i = str_set.begin(); i != str_set.end(); ++i) {
        int curr_count = 0;
        for (auto j = 0; j < len; ++j) {
            if (*i == str[j])
                ++curr_count;
        }
        if (curr_count > *count) {
            *count = curr_count;
            c = *i;
        }
    } 
    return c;
}

int main() {
    const char *s = "aaabab";
    int count = 0;
    char res = find_most_common(s, &count);
    std::cout << res << ' ' << count << std::endl;
    return 0;
}
