// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// Тесты для checkPrim
TEST(checkPrimTest, HandlesSmallPrimes) {
    EXPECT_TRUE(checkPrim(2));
    EXPECT_TRUE(checkPrim(3));
    EXPECT_TRUE(checkPrim(5));
    EXPECT_TRUE(checkPrim(7));
    EXPECT_TRUE(checkPrim(11));
}

TEST(checkPrimTest, HandlesSmallNonPrims) {
    EXPECT_FALSE(checkPrim(0));
    EXPECT_FALSE(checkPrim(1));
    EXPECT_FALSE(checkPrim(4));
    EXPECT_FALSE(checkPrim(6));
    EXPECT_FALSE(checkPrim(8));
    EXPECT_FALSE(checkPrim(9));
    EXPECT_FALSE(checkPrim(10));
}

TEST(checkPrimTest, HandlesLargePrimes) {
    EXPECT_TRUE(checkPrim(7919));
    EXPECT_TRUE(checkPrim(104729));
    EXPECT_TRUE(checkPrim(1299709));
}

TEST(checkPrimTest, HandlesLargeNonPrims) {
    EXPECT_FALSE(checkPrim(7920));
    EXPECT_FALSE(checkPrim(104730));
    EXPECT_FALSE(checkPrim(1299710));
}

// Тесты для nPrim
TEST(nPrimTest, HandlesFirstPrimes) {
    EXPECT_EQ(nPrim(1), 2);
    EXPECT_EQ(nPrim(2), 3);
    EXPECT_EQ(nPrim(3), 5);
    EXPECT_EQ(nPrim(4), 7);
    EXPECT_EQ(nPrim(5), 11);
}

TEST(nPrimTest, HandlesNthPrimes) {
    EXPECT_EQ(nPrim(10), 29);
    EXPECT_EQ(nPrim(20), 71);
    EXPECT_EQ(nPrim(30), 113);
}

TEST(nPrimTest, HandlesZero) {
    EXPECT_EQ(nPrim(0), 0);
}

// Тесты для nextPrim
TEST(nextPrimTest, HandlesSmallNumbers) {
    EXPECT_EQ(nextPrim(1), 2);
    EXPECT_EQ(nextPrim(2), 3);
    EXPECT_EQ(nextPrim(3), 5);
    EXPECT_EQ(nextPrim(4), 5);
    EXPECT_EQ(nextPrim(5), 7);
}

TEST(nextPrimTest, HandlesNumbersNearPrimes) {
    EXPECT_EQ(nextPrim(10), 11);
    EXPECT_EQ(nextPrim(11), 13);
    EXPECT_EQ(nextPrim(12), 13);
    EXPECT_EQ(nextPrim(13), 17);
}

TEST(nextPrimTest, HandlesLargeNumbers) {
    EXPECT_EQ(nextPrim(100), 101);
    EXPECT_EQ(nextPrim(1000), 1009);
    EXPECT_EQ(nextPrim(10000), 10007);
}

// Тесты для sumPrim
TEST(sumPrimTest, HandlesSmallBounds) {
    EXPECT_EQ(sumPrim(10), 17);
    EXPECT_EQ(sumPrim(20), 77);
}

TEST(sumPrimTest, HandlesZeroAndOne) {
    EXPECT_EQ(sumPrim(0), 0);
    EXPECT_EQ(sumPrim(1), 0);
    EXPECT_EQ(sumPrim(2), 0);
}

TEST(sumPrimTest, HandlesLargeBound) {
    EXPECT_EQ(sumPrim(2000000), 142913828922);
}
