#include "triangle.h"
#include <gtest/gtest.h>

namespace
{
	TEST(TriangleTest, InvalidSides)
	{
		EXPECT_EQ(-1, type_of_triangle(-10, 20, 30));
		EXPECT_EQ(-1, type_of_triangle(10, -20, 30));
		EXPECT_EQ(-1, type_of_triangle(3, 4, -8));
	}
	
	TEST(TriangleTest, NonInformation)
	{
		EXPECT_EQ(0, type_of_triangle(10, 20, 30));
		EXPECT_EQ(0, type_of_triangle(3, 4, 8));
	}
}

