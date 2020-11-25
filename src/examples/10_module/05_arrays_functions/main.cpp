#include "arr_functions.h"


int main() 
{
	const int SIZE = 3;
	int numbers[SIZE] {4, 1, 10};

	//iterate_array_ptr(numbers, SIZE);

	int times_table[ROWS][COLS];

	populate_times_table(times_table, ROWS);

	display_times_table(times_table, ROWS);

	return 0;
}