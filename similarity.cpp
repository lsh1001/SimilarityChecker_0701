#include <iostream>
#include <string>

using std::string;

class Similarity {
public:
	int checkLength(string str1, string str2) {
		if (isSameStringSize(str1, str2))
			return 60;
		if (!isPartialPointCase(str1, str2))
			return 0;
		return 30;
	}

private:
	bool isSameStringSize(std::string& str1, std::string& str2)
	{
		return str1.size() == str2.size();
	}

	bool isPartialPointCase(std::string& str1, std::string& str2)
	{
		return ((str1.size() < str2.size() * 2) && (str2.size() < str1.size() * 2));
	}
};