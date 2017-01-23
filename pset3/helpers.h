#define _XOPEN_SOURCE 
#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdbool.h>

/**
 ** Returns true if value is in array of n values, else false.
 **/
bool search(int value, int values[], int n);

/**
 ** Sorts array of n values.
 **/
void sort(int values[], int n);

//Custom sort functions
//bool linear_search(int value, int values[], int n);
bool binary_search(int value, int values[], int n);

void bubble_sort(int values[], int n);
void selection_sort(int values[], int n);
void insertion_sort(int values[], int n);

#endif
