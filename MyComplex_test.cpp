/*    @file MyComplex_test.cpp   
      @author < Fill Me In >
      @date < Fill Me In >

			@description Tests for the MyComplex class
*/

#include "gtest/gtest.h"

#include "MyComplex.h"


TEST(FirstTest, Negative) {
  // This test is named "Negative", and belongs to the "FactorialTest"
  // test case.
  MyComplex a;
  EXPECT_EQ(a.add(5,3), 8);

}

