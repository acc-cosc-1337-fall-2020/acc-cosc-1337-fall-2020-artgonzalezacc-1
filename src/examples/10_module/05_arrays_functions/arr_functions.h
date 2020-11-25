#include<iostream>
#include<iomanip>

const int COLS = 10;
const int ROWS = 10;

//header iterate_array function with int pointer array and size int for array size
void iterate_array(int nums[], int size);

void iterate_array_ptr(int* nums, int size);

void populate_times_table(int times_table [][COLS], int rows);

void display_times_table(int times_table [][COLS], int rows);
