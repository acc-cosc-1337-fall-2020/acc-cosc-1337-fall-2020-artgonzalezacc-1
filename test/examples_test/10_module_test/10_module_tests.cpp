#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "arr_functions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test if array function parameter is value or reference parameter")
{
	const int SIZE = 3;
	int numbers[SIZE] {4, 1, 10};

	iterate_array(numbers, SIZE);
	REQUIRE(numbers[SIZE-1] == 1000);
}

TEST_CASE("Test if pointer array function parameter is value or reference parameter")
{
	const int SIZE = 3;
	int numbers[SIZE] {4, 1, 10};

	iterate_array_ptr(numbers, SIZE);
	REQUIRE(numbers[SIZE-1] == 1000);
}

