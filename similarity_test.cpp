#include "gmock/gmock.h"
#include "similarity.cpp"

using namespace testing;

class SimilerityFixture : public Test {
public:
	Similarity checker;
	int expect;
};

TEST_F(SimilerityFixture, SameStringLengthCase) {
	expect = 60;
	EXPECT_EQ(expect, checker.checkLength("ABC", "ABC"));
}