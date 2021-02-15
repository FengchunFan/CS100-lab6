nclude "../header/rectangle.hpp"

#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(RectangleTest, Constructor){
	Rectangle* rect = new Rectangle();
	Expect_EQ(rect->area(),0);	
}

TEST(RectangleTest, Constructor){
        Rectangle* rect = new Rectangle();
        Expect_EQ(rect->perimeter(),0);
}

TEST(RectangleTest, Constructor_Normal){
        Rectangle* rect = new Rectangle(2,3);
        Expect_EQ(rect->area(),6);
}

TEST(RectangleTest, Constructor_Normal){
        Rectangle* rect = new Rectangle(2,3);
        Expect_EQ(rect->perimeter(),10);
}

TEST(RectangleTest, Constructor_WZero){
        Rectangle* rect = new Rectangle(0,3);
        Expect_EQ(rect->area(),0);
}

TEST(RectangleTest, Constructor_HZero){
        Rectangle* rect = new Rectangle(3,0);
        Expect_EQ(rect->area(),0);
}


