#include<string>


int lengthOfLastWord(std::string s) {
    size_t i = s.length() - 1;
    int y = 0;
    while (s[i] == ' ') {
        --i;
        if (i == 0 && s[i] != ' ') {
            return 0;
        }
        continue;

    }

    for (; s[i] != ' '; --i) {
        ++y;
        if (i == 0) {
            return y;
        }
    }
    return y;
}