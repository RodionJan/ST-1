// Copyright 2025 UNN-CS

#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

// Тесты для checkPrime
TEST(checkPrimeTest, HandlesSmallPrimes) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(7));
    EXPECT_TRUE(checkPrime(11));
}

TEST(checkPrimeTest, HandlesSmallNonPrimes) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(6));
    EXPECT_FALSE(checkPrime(8));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(10));
}

TEST(checkPrimeTest, HandlesLargePrimes) {
    EXPECT_TRUE(checkPrime(7919));
    EXPECT_TRUE(checkPrime(104729));
    EXPECT_TRUE(checkPrime(1299709));
}

TEST(checkPrimeTest, HandlesLargeNonPrimes) {
    EXPECT_FALSE(checkPrime(7920));
    EXPECT_FALSE(checkPrime(104730));
    EXPECT_FALSE(checkPrime(1299710));
}

// Тесты для nPrime
TEST(nPrimeTest, HandlesFirstPrimes) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
}

TEST(nPrimeTest, HandlesNthPrimes) {
    EXPECT_EQ(nPrime(10), 29);
    EXPECT_EQ(nPrime(20), 71);
    EXPECT_EQ(nPrime(30), 113);
}

TEST(nPrimeTest, HandlesZero) {
    EXPECT_EQ(nPrime(0), 0);
}

// Тесты для nextPrime
TEST(nextPrimeTest, HandlesSmallNumbers) {
    EXPECT_EQ(nextPrime(1), 2);
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(4), 5);
    EXPECT_EQ(nextPrime(5), 7);
}

TEST(nextPrimeTest, HandlesNumbersNearPrimes) {
    EXPECT_EQ(nextPrime(10), 11);
    EXPECT_EQ(nextPrime(11), 13);
    EXPECT_EQ(nextPrime(12), 13);
    EXPECT_EQ(nextPrime(13), 17);
}

TEST(nextPrimeTest, HandlesLargeNumbers) {
    EXPECT_EQ(nextPrime(100), 101);
    EXPECT_EQ(nextPrime(1000), 1009);
    EXPECT_EQ(nextPrime(10000), 10007);
}

// Тесты для sumPrime
TEST(sumPrimeTest, HandlesSmallBounds) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(20), 77);
}

TEST(sumPrimeTest, HandlesZeroAndOne) {
    EXPECT_EQ(sumPrime(0), 0);
    EXPECT_EQ(sumPrime(1), 0);
    EXPECT_EQ(sumPrime(2), 0);
}

TEST(sumPrimeTest, HandlesLargeBound) {
    EXPECT_EQ(sumPrime(2000000), 142913828922);
}
