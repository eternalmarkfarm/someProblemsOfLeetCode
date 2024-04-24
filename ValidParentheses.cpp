#include<vector>
#include<string>
#include <stack>

bool isValid(std::string s) {
	std::stack<char> par;
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
			par.push(s[i]);
		}
		if (s[i] == ')') {
			if (par.empty()) {
				return false;
			}
			if (par.top() == '(') {
				par.pop();
			}
			else {
				return false;
			}
		}
		if (s[i] == ']') {
			if (par.empty()) {
				return false;
			}
			if (par.top() == '[') {
				par.pop();
			}
			else {
				return false;
			}
		}
		if (s[i] == '}') {
			if (par.empty()) {
				return false;
			}
			if (par.top() == '{') {
				par.pop();
			}
			else {
				return false;
			}
		}
	}
	return par.empty();
}