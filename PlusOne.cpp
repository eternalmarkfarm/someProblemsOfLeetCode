#include<vector>

std::vector<int> plusOne(std::vector<int>& digits) {
    if (digits.back() < 9) {
        digits.back() = digits[digits.size() - 1] + 1;
        return digits;
    }
    size_t i = 1;
    while (digits.size() >= i && digits[digits.size() - i] == 9) {
        digits[digits.size() - i] = 0;
        ++i;
    }
    if (digits.size() - (i-1) == 0) {
        digits[digits.size() - (i-1)] = 1;
        digits.push_back(0);
    }
    else {
        digits[digits.size() - i] = digits[digits.size() - i] + 1;
    }
    
    

    return digits;
}