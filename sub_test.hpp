#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "mockop.hpp"
#include "sub.hpp"

TEST(SubTest, SubPosNeg) {
	Base* test1 = new EightOpMock();
	Base* test2 = new NegFiveMock();
	Sub* test = new Sub(test1, test2);
	EXPECT_EQ(test->evaluate(), 13.0);
}//subtracting a negative from a positive

TEST(SubTest, SubNegPos) {
	Base* test1 = new NegFiveMock();
	Base* test2 = new EightOpMock();
	Sub* test = new Sub(test1, test2);
	EXPECT_EQ(test->evaluate(), -13.0);
}//subtracting a positive from a negative

TEST(SubTest, SubZero) {
	Base* test1 = new EightOpMock();
	Base* test2 = new ZeroOpMock();
	Sub* test = new Sub(test1, test2);
	EXPECT_EQ(test->evaluate(), 8.0);
}//subtracting zero from a number

TEST(SubTest, StringifySubNeg) {
	Base* test1 = new EightOpMock();
	Base* test2 = new NegFiveMock();
	Sub* test = new Sub(test1, test2);
	EXPECT_EQ(test->stringify(), "(8.0 - -5.0)");
}//subtracting negative stringifyd

TEST(SubTest, StringifySubPos) {
	Base* test1 = new NegFiveMock();
	Base* test2 = new EightOpMock();
	Sub* test = new Sub(test1, test2);
	EXPECT_EQ(test->stringify(), "(-5.0 - 8.0)");
}//subtracting positive stringifyd

#endif
