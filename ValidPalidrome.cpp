#include<string>
#include <cctype>
#include <algorithm>

bool isPalindrome(std::string p) {
	std::string s;
	for (auto a : p) {			
		if (std::isupper(a)) {
			char i = std::tolower(a);
			s += i;
			continue;
		}
		if ((a >= 'a' && a <= 'z') ||  (a >= '0' && a <= '9'))
		{
			s += a;
		}
	}
	p = s;
	std::reverse(s.begin(), s.end());
	
	return p == s;
}