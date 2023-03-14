//
// Created by vasyl on 14/03/2023.
//

#include <MyAwesomeClass.h>
#include "gtest/gtest.h"

TEST(MyAwesomeClassTestSuite, ClassConstruction) {
    //Arrange
    vmosiiuk::MyAwesomeClass cls{1};

    //Act
    auto methodAResult = cls.MethodA(1.0, 2.0);

    EXPECT_EQ(0, methodAResult);
}