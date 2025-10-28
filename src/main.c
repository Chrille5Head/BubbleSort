#include "sort.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

char letter_arr1[] = {'z', 'S', 's', 'a'};
// aSsz
char number_arr1[] = {4, -1, 2, 9};
// -1, 2, 4, 9

int main()
{
int arr_length_letter = sizeof(letter_arr1) / sizeof(letter_arr1[0]);
int arr_length_number = sizeof(number_arr1) / sizeof(number_arr1[0]);

//print before sorting
printf("letter_arr1 before sorting:\n");
print_array(letter_arr1, arr_length_letter);
printf("number_arr1 before sorting:\n");
print_array_number(number_arr1,arr_length_number);

//sorting both arrays
bubble_sort(letter_arr1, arr_length_letter, pair_is_in_order);
bubble_sort(number_arr1, arr_length_number, pair_is_in_order);

//print after sorting
printf("letter_arr1 after sorting:\n");
print_array(letter_arr1, arr_length_letter);
printf("number_arr1 after sorting:\n");
print_array_number(number_arr1, arr_length_number);

return 0;
}