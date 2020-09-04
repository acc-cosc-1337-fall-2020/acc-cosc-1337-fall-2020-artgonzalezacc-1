#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "numbers.h"
#include "vars.h"
#include<string>

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*test case echo_variable */
TEST_CASE("Test echo function")
{
	REQUIRE(echo_variable_ret(5) == 5);
}

/*test case add_to_double_1 with 0 as parameter*/
/*test case add_to_double_1 with 1 as parameter*/
TEST_CASE("Test add to double 1")
{
	REQUIRE(add_to_double_1(0) == .9);
	REQUIRE(add_to_double_1(1) == 1.9);
}

/*test case add_to_double_2 with 0 as parameter*/

/*test case add_to_double_2 with 1 as parameter*/

/*test case char test ASCII values */

/*test case string test ASCII values Joe characters are equal to 74, 111, and 101*/

