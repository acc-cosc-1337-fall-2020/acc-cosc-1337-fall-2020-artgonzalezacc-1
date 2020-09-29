#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "for.h"
#include "value_ref.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify sum of squares function")
{
	REQUIRE(sum_of_squares(3) == 14);
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}

TEST_CASE("Verify sum numbers function")
{
	REQUIRE(sum_numbers(4) == 20);
}

TEST_CASE("Test get area with default parameters")
{
	REQUIRE(get_area() == 200);
	REQUIRE(get_area(5) == 50);
	REQUIRE(get_area(20, 20) == 400);
}

TEST_CASE("Test value and reference parameters")
{
	int num1 = 0, num2 = 0;

	pass_by_val_and_ref(num1, num2);
	REQUIRE(num1 == 0);
	REQUIRE(num2 == 50);
}