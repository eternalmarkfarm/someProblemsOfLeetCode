#include<vector>
#include<string>
#include<algorithm>

// https://leetcode.com/problems/longest-common-prefix/description/

bool compareByLength(const std::string& a, const std::string& b) {
    return a.size() < b.size();
}


std::string longestCommonPrefix(std::vector<std::string>& strs) {

    std::sort(strs.begin(), strs.end(), compareByLength);


    std::string lcp = "";
    int sizeS = strs[0].size();
    for (size_t i = 0; i < sizeS; ++i) {
        int count = 1;
        int next = 1;
        int y = 1;

        while (y < strs.size()) {
            if (strs[0][i] == strs[next][i]) {
                ++count;
                ++next;
                ++y;
            }
            else {
                return lcp;
            }
        }
        if (count == strs.size()) {
            lcp += std::string(1, strs[0][i]);
        }
    }
    return lcp;
}