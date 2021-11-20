#include<gtest/gtest.h>
#include "../src/adder.h"


TEST(TestAdder, OutputTest){
    EXPECT_EQ(2, basic_operations::Sum(1,1));
};