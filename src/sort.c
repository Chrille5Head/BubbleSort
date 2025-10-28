#include "sort.h"
#include <ctype.h>
#include <stdio.h>

bool pair_is_in_order(char a, char b) //Checks if array index pair is in order
{        
    if(isalpha(a) && isalpha(b)){ //this checks if a and b are letters, if yes,  we check if that lowercase a <= lowercase b
        char new_a;
        char new_b;
        new_a = tolower(a); //lowercase on a and b to eliminate case-sensitivity
        new_b = tolower(b);  
        if(new_a <= new_b)        
            return true; // if lowercase a <= lowercase b, return true
        else
            return false; 
    }   
    return a <= b; // a and b are numbers, return true if a <= b
}

void swap(char arr[], int i, int j) //function to swap the pairs if called on by bubble_sort
{        
        char temp = arr[i]; //saves index i to temp
        arr[i] = arr[j]; //saves next index j to index i
        arr[j] = temp; // now saves temp (i) back to the j index spot
}

void bubble_sort(char arr[], int arr_length, bool (*pair_is_in_order)(char a, char b)) //Function that does the sorting
{
    for (size_t i = 0; i < arr_length - 1; i++) //Iterates through the length of the array -1
    {
        for (size_t j = 0; j < arr_length -1; j++) //Looking at pairs in array; [j] and [j+1]
        {
            if (pair_is_in_order(arr[j],arr[j + 1]) == false) //If pair is not yet ordered, run swap()
            {
                swap(arr, j, j+1);
            }
        }
    }
}


void print_array(char arr[], int arr_length) //Function to print char array
{
    for (size_t i = 0; i < arr_length; i++) 
    {
        printf("%c ", arr[i]);
    }
    printf("\n");
}
void print_array_number(char arr[], int arr_length) //Function to print number array
{
    for (size_t i = 0; i < arr_length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}