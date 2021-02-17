#include "../header/rectangle.hpp"

#include "gtest/gtest.h"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

TEST(RectangleTest, Constructor1){
	Rectangle* rect = new Rectangle();
	delete rect;
	EXPECT_EQ(rect->area(),0);	
}

TEST(RectangleTest, Constructor2){
        Rectangle* rect = new Rectangle();
	delete rect;
        EXPECT_EQ(rect->perimeter(),-1);
}

TEST(RectangleTest, Constructor_Normal1){
        Rectangle* rect = new Rectangle(2,3);
	delete rect;
        EXPECT_EQ(rect->area(),6);
}

TEST(RectangleTest, Constructor_Normal2){
        Rectangle* rect = new Rectangle(2,3);
	delete rect;
        EXPECT_EQ(rect->perimeter(),10);
}

TEST(RectangleTest, Constructor_WZero){
        Rectangle* rect = new Rectangle(0,3);
	delete rect;
        EXPECT_EQ(rect->area(),0);
}

TEST(RectangleTest, Constructor_HZero){
        Rectangle* rect = new Rectangle(3,0);
	delete rect;
        EXPECT_EQ(rect->area(),0);
}

TEST(RectangleTest, Constructor_WZero1){
        Rectangle* rect = new Rectangle(0,3);
	delete rect;
        EXPECT_EQ(rect->perimeter(),-1);
}

TEST(RectangleTest, Constructor_HZero1){
        Rectangle* rect = new Rectangle(3,0);
	delete rect;
        EXPECT_EQ(rect->perimeter(),-1);
}

TEST(RectangleTest, Constructor_Negative1){
        Rectangle* rect = new Rectangle(-1,3);
	delete rect;
        EXPECT_EQ(rect->area(),-1);
}

TEST(RectangleTest, Constructor_Negative2){
        Rectangle* rect = new Rectangle(3,-1);
	delete rect;
        EXPECT_EQ(rect->area(),-1);
}

TEST(RectangleTest, Constructor_Negative_Both){
        Rectangle* rect = new Rectangle(-1,-3);
	delete rect;
        EXPECT_EQ(rect->area(),-1);
}

TEST(RectangleTest, Constructor_Negative_Both2){
        Rectangle* rect = new Rectangle(-3,-1);
	delete rect;
        EXPECT_EQ(rect->area(),-1);
}

TEST(RectangleTest, Constructor_Decimal_1){
        Rectangle* rect = new Rectangle(1,0.3);
	delete rect;
        EXPECT_EQ(rect->area(),0);
}

TEST(RectangleTest, Constructor_Decimal_2){
        Rectangle* rect = new Rectangle(0.3,1);
	delete rect;
        EXPECT_EQ(rect->area(),0);
}
