#ifndef SORT_H
#define SORT_H

#include <stdbool.h>


bool pair_is_in_order(char a, char b);
void swap(char arr[], int i, int j);
void bubble_sort(char arr[], int arr_length, bool (*pair_is_in_order)(char a, char b));
void print_array(char arr[], int arr_length);
void print_array_number(char arr[], int arr_length);

#endif