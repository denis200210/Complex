#include "gtest/gtest.h"
#include "complex.h"

TEST(OperatorPlus, tse1)
{
    Complex x, y, expect;
    x.real = 3;
    x.imaginary = 2;
    y.real = 5;
    y.imaginary = 2;
    expect = x + y;

    EXPECT_TRUE(expect.real == 8);
    EXPECT_TRUE(expect.imaginary == 4);
}

TEST(OperatorMinus, tse2)
{
    Complex x, y, expect;
    x.real = 1.2;
    x.imaginary = 0.3;
    y.real = 0.4;
   y.imaginary = 0.1;
    expect = x - y;

    EXPECT_TRUE(expect.real == 0.8);
    EXPECT_TRUE(expect.imaginary == 0.2);
}

TEST(OperatorMulti, tse3)
{
    Complex x, y, expect;
    x.real = 3;
    x.imaginary = 2;
    y.real = 5;
    y.imaginary = 6;
    expect = x * y;

    EXPECT_TRUE(expect.real == 3);
    EXPECT_TRUE(expect.imaginary == 28);
}

TEST(OperatorDiv, t4)
{
    Complex x, y, expect;
    x.real = 6;
    x.imaginary = 6;
    y.real = 3;
    y.imaginary = 3;
    expect = x / y;
    EXPECT_TRUE(expect.real == 2);
    EXPECT_TRUE(expect.imaginary == 0);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}