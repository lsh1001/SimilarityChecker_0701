#include "gmock/gmock.h"
#include "similarity.cpp"

using namespace testing;

TEST(SimilarityChecker, SameStringCase) {
	Similarity checker;
	int expect = 60;
	int actual = checker.checkLength("ABC","ABC");

	EXPECT_EQ(expect, actual);
}