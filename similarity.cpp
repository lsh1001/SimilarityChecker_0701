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
		return partialPointCase(str1, str2);
	}

private:
	bool isSameStringSize(string& str1, string& str2)
	{
		return str1.size() == str2.size();
	}

	bool isPartialPointCase(string& str1, string& str2)
	{
		return ((str1.size() < str2.size() * 2) && (str2.size() < str1.size() * 2));
	}

	int partialPointCase(std::string& str1, std::string& str2)
	{
		if (str1.size() > str2.size())
			return 60 - (60 * (str1.size() - str2.size()) / str2.size());
		return 60 - (60 * (str2.size() - str1.size()) / str1.size());
	}
};