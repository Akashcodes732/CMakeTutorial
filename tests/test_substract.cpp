#include<gtest/gtest.h>
#include "../src/substract.h"
// #include "substract.h"

TEST(TestSubstract, OutputSubstractTest){
    EXPECT_EQ(0, basic_operations::substract(1,1));
    EXPECT_EQ(1, basic_operations::substract(2,1));
    EXPECT_EQ(5, basic_operations::substract(5,10));
};