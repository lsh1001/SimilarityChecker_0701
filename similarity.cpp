#include <iostream>
#include <string>

using std::string;

class Similarity {
public:
	int checkLength(string str1, string str2) {
		if (str1.size() == str2.size())
			return 60;
		return 0;
	}
};