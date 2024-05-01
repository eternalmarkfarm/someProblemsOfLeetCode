#include <string>
#include <algorithm>

std::string addBinary(std::string a, std::string b) {
	std::string c = "";
	std::string n = "1";
	bool has = false;
	
	while (a.size() > b.size()) {
		b = "0" + b;
	}
	while(a.size() < b.size()){
		a = "0" + a;
	}
	
	for (int i = a.size()-1; i >= 0 ; --i) {
		if (a[i] >= 0 && b[i] >= 0 && a[i] + b[i] == 96) {
			if (has) {
				c += "1";
				has = false;
				continue;
			}
			c += "0";
			continue;
		}
		if (a[i] >= 0 && b[i] >= 0 && a[i] + b[i] == 97) {
			if (has) {
				c += "0";				
				continue;
			}
			c += "1";
			continue;
		}
		if (a[i] >= 0 && b[i] >= 0 && a[i] + b[i] == 98) {
			if (has) {
				c += "1";
				continue;
			}
			c += "0";
			has = true;
			continue;
		}
		
		
	}
	if(has)
	{
		c += n;
	}
	std::reverse(c.begin(), c.end());
	return c;
}