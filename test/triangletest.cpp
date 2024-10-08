/*
    TRIANGLE TESTS
*/

#include <gtest/gtest.h>
#include "../lib/Triangle.h"
using shapes::Triangle;

TEST(TriangleTests, testPerimeter) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getPerimeter(),9);
}


TEST(TriangleTests, testPerimeter2) {
    Triangle *aTriangle = new Triangle(10,10,5);
    EXPECT_EQ (aTriangle->getPerimeter(), 25);
}

TEST(TriangleTests, testPerimeter3) {
    Triangle *aTriangle = new Triangle(3,2,2);
    EXPECT_EQ (aTriangle->getPerimeter(), 7);
}

TEST(TriangleTests, testArea1) {
    Triangle *aTriangle = new Triangle(15,12,6);
    EXPECT_EQ (aTriangle->getArea(), 34.2);
}

TEST(TriangleTests, testArea2) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->getArea(), 3.897);
}

TEST(TriangleTests, testArea3) {
    Triangle *aTriangle = new Triangle(5,4,4);
    EXPECT_EQ (aTriangle->getArea(), 7.806);
}

TEST(TriangleTests, testKind1) {
    Triangle *aTriangle = new Triangle(15,15,15);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::EQUILATERAL);
}

TEST(TriangleTests, testDeath1) {
    EXPECT_DEATH (Triangle *aTriangle = new Triangle(0.9,-0.1,0.7), "Does not satisfy triangle inequality");
}

TEST(TriangleTests, testKind2) {
    Triangle *aTriangle = new Triangle(10,8,8);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::ISOSCELES);
}

TEST(TriangleTests, testThrow1) {
    Triangle *aTriangle = new Triangle(10,8,8);
    EXPECT_NO_THROW (aTriangle->getKind());
}

TEST(TriangleTests, testKind3) {
    Triangle *aTriangle = new Triangle(10,5,8);
    EXPECT_EQ (aTriangle->getKind(), Triangle::Kind::SCALENE);
}

TEST(TriangleTests, testEquilateral1) {
    Triangle *aTriangle = new Triangle(3,3,3);
    EXPECT_EQ (aTriangle->isEquilateral(), true);
}

TEST(TriangleTests, testEquilateral2) {
    Triangle *aTriangle = new Triangle(8,8,8);
    EXPECT_EQ (aTriangle->isEquilateral(), true);
}

TEST(TriangleTests, testEquilateral3) {
    Triangle *aTriangle = new Triangle(5,2,4);
    EXPECT_EQ (aTriangle->isEquilateral(), false);
}

TEST(TriangleTests, testIsosceles1) {
    Triangle *aTriangle = new Triangle(5,4,4);
    EXPECT_EQ (aTriangle->isIsosceles(), true);
}

TEST(TriangleTests, testIsosceles2) {
    Triangle *aTriangle = new Triangle(10,10,5);
    EXPECT_EQ (aTriangle->isIsosceles(), true);
}

TEST(TriangleTests, testIsosceles3) {
    Triangle *aTriangle = new Triangle(10,9,7);
    EXPECT_EQ (aTriangle->isIsosceles(), false);
}