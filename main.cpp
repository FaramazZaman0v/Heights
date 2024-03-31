#include <iostream>
#include <list>
#include "heights.cpp"
#include <gtest/gtest.h>

TEST(QTest, P){
	ASSERT_EQ({1,2}, Heights({1,3,2});
	ASSERT_EQ({0,1,2,3}, Heights({4,3,2,1});
	ASSERT_EQ({3}, Heights({1,3,2,4});
	ASSERT_EQ({-1}, Heights();
}

int main(int argc, char** argv){
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
