#include <gtest/gtest.h>

#include "../lib/testsubject.h"

TEST(MathTest, Square1) {
    ASSERT_EQ(TestSubject::square(2), 4);
}
TEST(MathTest, Square2) {
    ASSERT_EQ(TestSubject::square(3), 9);
}

TEST(MathTest, Square3) {
    ASSERT_EQ(TestSubject::square(4), 16);
}

TEST(MathTest, isEven1) {
    ASSERT_EQ(TestSubject::isEven(4), true);
}

TEST(MathTest, isEven2) {
    ASSERT_EQ(TestSubject::isEven(3), false);
}

TEST(MathTest, isEven3) {
    ASSERT_EQ(TestSubject::isEven(0), true);
}