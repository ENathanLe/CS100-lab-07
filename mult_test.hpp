#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"
#include "op.hpp"
#include "mockop.hpp"
#include "mult.hpp"

TEST(MultTest, MultTestRun) {
	Base* testVal1 = new EightOpMock();
	Base* testVal2 = new SixOpMock();
	Mult* test = new Mult(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), 48);
}//testing to see that multiply works in general

TEST(MultTest, NegAndPos) {
	Base* testVal1 = new EightOpMock();
	Base* testVal2 = new NegThreeMock();
	Mult* test = new Mult(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), -24);	
}//testing to see a negative multiplied by a positive number

TEST(MultTest, NegAndNeg) {
	Base* testVal1 = new NegFiveMock();
	Base* testVal2 = new NegThreeMock();
	Mult* test = new Mult(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), 15);
}//testing to see if negative number times a negative returns a positive number

TEST(MultTest, ZeroOperand) {
	Base* testVal1 = new ZeroOpMock();
	Base* testVal2 = new EightOpMock();
	Mult* test = new Mult(testVal1, testVal2);
	EXPECT_EQ(test->evaluate(), 0);
}//testing to see if zero as an operand returns zero as a product

TEST(MultTest, StringMult) {
	Base* testVal1 = new EightOpMock();
	Base* testVal2 = new SixOpMock();
	Mult* test = new Mult(testVal1, testVal2);
	EXPECT_EQ(test->stringify(), "(8.0 * 6.0)");
}//testing the stringify of pos * pos

TEST(MultTest, StringNegNeg) {
	Base* testVal1 = new NegFiveMock();
	Base* testVal2 = new NegThreeMock();
	Mult* test = new Mult(testVal1, testVal2);
	EXPECT_EQ(test->stringify(), "(-5.0 * -3.0)");
}//testing the stringify of neg * neg
#endif
