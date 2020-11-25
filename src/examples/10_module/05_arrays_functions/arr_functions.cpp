//

#include "arr_functions.h"
//define iterate_array and loop through with ++ increment
void iterate_array(int nums[], int size)
{
    for(int i=0; i < size; ++i)    
    {
        std::cout<<nums[i]<<"\n";
    }

    nums[size -1] = 1000;
}

void iterate_array_ptr(int* nums, int size)
{
    for(int i=0; i < size; ++i)    
    {
        std::cout<<nums[i]<<"\n";
    }

    nums[size -1] = 1000;
}

void populate_times_table(int times_table [][COLS], int rows)
{
    for(int i=0; i < ROWS; ++i)
    {
        for(int j=0; j < COLS; ++j)
        {
            times_table[i][j] = (i+1) * (j+1);
        }
    }
}

void display_times_table(int times_table [][COLS], int rows)
{
    for(int i=0; i < ROWS; ++i)
    {
        for(int j=0; j < COLS; ++j)
        {
            std::cout<<std::setw(5)<<times_table[i][j];
        }

        std::cout<<"\n";
    }    
}