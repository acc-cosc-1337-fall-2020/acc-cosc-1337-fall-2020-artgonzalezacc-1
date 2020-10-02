#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "for.h"
#include "value_ref.h"
#include "vec.h"

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

TEST_CASE("Test function value parameter with string")
{
	std::string str = "john";

	loop_string_w_index(str);

	REQUIRE(str == "john");
}

TEST_CASE("Test function reference parameter with string")
{
	std::string str = "john";

	loop_string_w_index_ref(str);

	REQUIRE(str == "zzzz");
}

TEST_CASE("Test function value parameter with string- for ranged")
{
	std::string str = "john";

	loop_string_for_ranged(str);

	REQUIRE(str == "john");
}

TEST_CASE("Test function reference parameter with string- for ranged w value target variable")
{
	std::string str = "john";

	loop_string_for_ranged_ref(str);

	REQUIRE(str == "john");
}

TEST_CASE("Test function reference parameter with string- for ranged w reference target variable")
{
	std::string str = "john";

	loop_string_for_ranged_ref_fr_ref(str);

	REQUIRE(str == "yyyy");
}

TEST_CASE("Test function value parameter for vector")
{
	std::vector nums {1,4, 10};
	std::vector expected_vector {1,4, 10};

	loop_vector_w_index(nums);

	REQUIRE(nums == expected_vector);
}

TEST_CASE("Test function reference parameter for vector")
{
	std::vector nums {1,4, 10};
	std::vector expected_vector {0, 0, 0};

	loop_vector_w_index_ref(nums);

	REQUIRE(nums == expected_vector);
}

TEST_CASE("Test function value parameter for vector-for ranged")
{
	std::vector nums {1,4, 10};
	std::vector expected_vector {1, 4, 10};

	loop_vector_for_ranged(nums);

	REQUIRE(nums == expected_vector);
}

TEST_CASE("Test function reference parameter for vector-for ranged")
{
	std::vector nums {1,4, 10};
	std::vector expected_vector {1, 4, 10};

	loop_vector_for_ranged_ref(nums);

	REQUIRE(nums == expected_vector);
}

TEST_CASE("Test function reference parameter for vector-for ranged-ref")
{
	std::vector nums {1,4, 10};
	std::vector expected_vector {0, 0, 0};

	loop_vector_for_ranged_ref_fr_ref(nums);

	REQUIRE(nums == expected_vector);
}