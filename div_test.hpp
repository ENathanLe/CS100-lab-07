#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "mockop.hpp"
#include "div.hpp"

TEST(DivTest, DivTestRun) {
	Base* testVal1 = new EightOpMock();
	Base* testVal2 = new SixOpMock();
	Div* test = new Div(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), (8.0/6.0));
}//testing to see that divide works in general

TEST(DivTest, PosDivNeg) {
	Base* testVal1 = new EightOpMock();
	Base* testVal2 = new NegThreeMock();
	Div* test = new Div(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), (8.0/-3.0));
}//testing to see if positive divided by negative works

TEST(DivTest, NegDivNeg) {
	Base* testVal1 = new NegFiveMock();
	Base* testVal2 = new NegThreeMock();
	Div* test = new Div(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), (5.0/3.0));
}//testing to see if negative divided by negative works


TEST(DivTest, NegDivPos) {
	Base* testVal1 = new NegFiveMock();
	Base* testVal2 = new EightOpMock();
	Div* test = new Div(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), (-5.0/8.0));
}//testing to see if negative divided by positive works

TEST(DivTest, DivideByZero) {
	Base* testVal1 = new EightOpMock();
	Base* testVal2 = new ZeroOpMock();
	Div* test = new Div(testVal1, testVal2);
	EXPECT_TRUE(isinf(test->evaluate()));
}//testing divide by zero


TEST(DivTest, StringDivPosPos) {
	Base* testVal1 = new EightOpMock();
	Base* testVal2 = new SixOpMock();
	Div* test = new Div(testVal1, testVal2);
	EXPECT_EQ(test->stringify(), "(8.0 / 6.0)");	
}//testing stringify for pos / pos

TEST(DivTest, StringDivNegNeg) {
	Base* testVal1 = new NegFiveMock();
	Base* testVal2 = new NegThreeMock();
	Div* test = new Div(testVal1, testVal2);
	EXPECT_EQ(test->stringify(), "(-5.0 / -3.0)");
}//testing stringify for neg / neg

#endif

