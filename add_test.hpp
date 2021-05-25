#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "mockop.hpp"
#include "add.hpp"

TEST(AddTest, AddPosPos) {
	Base* testVal1 = new EightOpMock();
	Base* testVal2 = new SixOpMock();
	Add* test = new Add(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), 14.0);
	delete test;
}//adding two positive numbers

TEST(AddTest, AddNegNeg) {
	Base* testVal1 = new NegFiveMock();
	Base* testVal2 = new NegThreeMock();
	Add* test = new Add(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), -8.0);
	delete test;
}//adding two negative numbers

TEST(AddTest, AddPosNeg) {
	Base* testVal1 = new NegFiveMock();
	Base* testVal2 = new SixOpMock();
	Add* test = new Add(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), 1.0);
	delete test;
}//adding positive to negative (bigger positive number)

TEST(AddTest, AddZeroZero) {
	Base* testVal1 = new ZeroOpMock();
	Base* testVal2 = new ZeroOpMock();
	Add* test = new Add(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), 0.0);		
	delete test;
}//adding two zeros together

TEST(AddTest, StringifyADd) {
	Base* testVal1 = new SixOpMock();
	Base* testVal2 = new EightOpMock();
	Add* test = new Add(testVal1, testVal2);
	EXPECT_EQ(test->stringify(), "(6.0 + 8.0)");
	delete test;
}//adding two pos and string version of this

#endif
