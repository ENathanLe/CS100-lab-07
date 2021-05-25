#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"
#include <string>

#include "op.hpp"
#include "rand.cpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpEvaluateNeg) {
    Op* test = new Op(-5.67);
    EXPECT_EQ(test->evaluate(), -5.67);
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpString) {
    Op* test = new Op(3.4);
    std::string test_str = test->stringify();
    EXPECT_EQ(test_str, "3.4");
}

TEST(OpTest, OpStringifyFraction) {
    Op* test = new Op(0.25);
    EXPECT_EQ(test->stringify(), "0.25");
}

TEST(OpTest, OpStringifyNeg) {
    Op* test = new Op(-10.0);
    EXPECT_EQ(test->stringify(), "-10");
}

TEST(OpTest, OpStringifyZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->stringify(), "0");
}

TEST(RandTest, Rand) {
    Rand* test = new Rand();
    EXPECT_GE(test->evaluate(), 0);
}

TEST(RandTest, RandEvaluate) {
    srand(1);
    Rand* test = new Rand();
    EXPECT_EQ(test->evaluate(), 83);
}

TEST(RandTest, RandStringify) {
    srand(25);
    Rand* test = new Rand();
    EXPECT_EQ(test->stringify(), "61");
}

#endif //__OP_TEST_HPP__
