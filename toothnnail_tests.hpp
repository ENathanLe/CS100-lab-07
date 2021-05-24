#ifndef __TOOTHNNAIL_TESTS_HPP__
#define __TOOTHNNAIL_TESTS_HPP__

#include "op.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "rand.hpp"
#include "pow.hpp"

TEST(ToothnnailTest, OddNegativeNumberMult) {
	Base* val1 = new Op(-1);
	Base* val2 = new Op(-2);
	Base* val3 = new Op(-3);
	Base* mult1 = new Mult(val1, val2);
	Base* mult2 = new Mult(mult1, val3);
	EXPECT_EQ(mult2->evaluate(), -6);
}//multiplying an odd amount of negative numbers together 

TEST(ToothnnailTest, AddMultDivSub) {
	Base* val1 = new Op(2);
	Base* val2 = new Op(3);
	Base* val3 = new Op(5);
	Base* val4 = new Op(-5);
	Base* val5 = new Op(1);
	Base* mult = new Mult(val2, val3);
	Base* div = new Div(mult, val4);
	Base* add = new Add(val1, div);
	Base* sub = new Sub(add, val5);
	EXPECT_EQ(sub->evaluate(), -2);	
}//2 + 3 * 5 / -5 - 1

TEST(ToothnnailTest, AddMultDivSubString) {
	Base* val1 = new Op(2);
	Base* val2 = new Op(3);
	Base* val3 = new Op(5);
	Base* val4 = new Op(-5);
	Base* val5 = new Op(1);
	Base* mult = new Mult(val2, val3);
	Base* div = new Div(mult, val4);
	Base* add = new Add(val1, div);
	Base* sub = new Sub(add, val5);
	EXPECT_EQ(sub->stringify(), "((2 + ((3 * 5) / -5)) - 1)");	
}//2 + 3 * 5 / -5 - 1

#endif
