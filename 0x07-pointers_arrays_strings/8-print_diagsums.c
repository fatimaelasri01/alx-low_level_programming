#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0
 */
void print_diagsums(int *a, int size) 
{
    int sum1 = 0;
    int sum2 = 0;
    int i; 
   
    for (i = 0; i < size; i++)
    {	    
        sum1 += *(a + i * size + i); 
        sum2 += *(a + i * size + (size - 1 - i)); 
    }
    printf("Sum of main diagonal: %d\n", sum1);
    printf("Sum of other diagonal: %d\n", sum2);
}

