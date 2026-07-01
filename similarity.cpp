#include <iostream>
#include <string>

using std::string;

class Similarity {
public:
	int checkLength(string str1, string str2) {
		int strlen1 = str1.size();
		int strlen2 = str2.size();

		if (isSameStringSize(strlen1, strlen2))
			return 60;
		if (!isPartialPointCase(strlen1, strlen2))
			return 0;
		return partialPointCase(strlen1, strlen2);
	}

private:
	bool isSameStringSize(int strlen1, int strlen2) {
		return strlen1 == strlen2;
	}

	bool isPartialPointCase(int strlen1, int strlen2) {
		return ((strlen1 < strlen2 * 2) && (strlen2 < strlen1 * 2));
	}

	int partialPointCase(int strlen1, int strlen2) {
		if (strlen1 > strlen2)
			return calculatePoint(strlen1, strlen2);
		return calculatePoint(strlen2, strlen1);
	}

	int calculatePoint(int strlen1, int strlen2) {
		return 60 - (60 * abs(strlen1 - strlen2) / strlen2);
	}

};