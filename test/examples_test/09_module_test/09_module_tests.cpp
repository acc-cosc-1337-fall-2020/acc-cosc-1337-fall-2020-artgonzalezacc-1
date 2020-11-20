#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Reference and pointer function parameters")
{
	int n1 = 5, n2 = 10;
	
	ref_param(n1, &n2);

	REQUIRE(n1 == 100);
	REQUIRE(n2 == 200);
}

TEST_CASE("Reference and pointer function parameters use a pointer")
{
	int n1 = 5, n2 = 10;
	int* ptr = &n2;
	
	ref_param(n1, ptr);

	REQUIRE(n1 == 100);
	REQUIRE(n2 == 200);
}

