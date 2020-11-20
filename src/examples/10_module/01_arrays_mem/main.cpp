#include "arrays_mem.h"

int main() 
{
	
	array_for_ranged();
	
	const int SIZE = 2;
	int numbers1[SIZE]{4, 10};
	int numbers2[SIZE]{};

	for(int i=0; i < SIZE; ++i)
	{
		numbers2[i] == numbers1[i];
	}

	return 0;

}