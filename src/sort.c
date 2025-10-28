#include "sort.h"
#include <ctype.h>
#include <stdio.h>

bool pair_is_in_order(char a, char b)
{        
    if(isalpha(a) && isalpha(b))
    {
        char new_a;
        char new_b;
        new_a = tolower(a);
        new_b = tolower(b);  
        if(new_a <= new_b)        
            return true;
        else
            return false;  
    }   
    return a <= b;
}

void swap(char arr[], int i, int j)
{        
        char temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;    
}

void bubble_sort(char arr[], int arr_length, bool (*pair_is_in_order)(char a, char b))
{
    for (size_t i = 0; i < arr_length - 1; i++)
    {
        for (size_t j = 0; j < arr_length -1; j++)
        {
            if (pair_is_in_order(arr[j],arr[j + 1]) == false)
            {
                swap(arr, j, j+1);
            }
        }
    }
}


void print_array(char arr[], int arr_length)
{
    for (size_t i = 0; i < arr_length; i++)
    {
        printf("%c ", arr[i]);
    }
    printf("\n");
}
void print_array_number(char arr[], int arr_length)
{
    for (size_t i = 0; i < arr_length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}