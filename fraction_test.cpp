#include "fraction.h"
#include <gtest/gtest.h>

TEST(Fraction, Empty_Cosnstructor) {
    Fraction B1;
  EXPECT_EQ(0, B1.isSimplest());
}
TEST(Fraction, Cosnstructor) {
    Fraction B2(2,3);
    Fraction B3(3,4);
    Fraction B1;
    B1=B2+B3;
  EXPECT_EQ(1, B1.isSimplest());
}
TEST(Fraction, Cosnstructor1) {
    Fraction B2(2,10);
EXPECT_EQ(0, B2.isSimplest());
}