/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c 
 * @brief This is the implementation file of assignment 1. Here, all the necessary functions that have prototypes
 * in stats.h are defined and used in the main function.
 *
 * This file implements and uses the functions declared in stats.h to calculate various statistics of a given set of data.
 *
 * @author Aniket Sedhai
 * @date 03/14/2022
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  float med = find_median(test, SIZE);
  float mean = find_mean(test, SIZE);
  unsigned char max = find_maximum(test, SIZE);
  unsigned char min = find_minimum(test, SIZE);
  /* Statistics and Printing Functions Go Here */
  print_statistics(mean, med, min, max);
  
  printf("\nArray after sorting from largest to smallest numbers: \n");
  sort_array(test, SIZE);
  print_array(test, SIZE);
}

/* Add other Implementation File Code Here */
void sort_array(unsigned char *ptr, unsigned int size)
{
	unsigned char temp;
	for(int i = 0; i < size; i++)
	{
		for(int j = i + 1; j < size; j++)
		{
			if(ptr[i] < ptr[j])
			{
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
}

void print_array(unsigned char *ptr, unsigned int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		printf("%d, ", ptr[i]);
	}
	printf("%d", ptr[size - 1]);
}

float find_median(unsigned char *ptr, unsigned int size)
{
	sort_array(ptr, size);
	
	if(size%2 == 0)
	{
		float a = (float)(ptr[(size/2) - 1]);
		float b = (float)(ptr[(size/2)]);
		float med = (a + b)/2.0;
		return med;
	}
	else
		return ptr[size/2];
}

float find_mean(unsigned char *ptr, unsigned int size)
{
	float mean = 0;
	for (int i = 0; i < size; i++)
	{
		mean += ptr[i];
	}
	mean = mean/size;
	return mean;
}

unsigned char find_maximum(unsigned char *ptr, unsigned int size)
{
	sort_array(ptr, size);
	return ptr[size - 1];
}

unsigned char find_minimum(unsigned char *ptr, unsigned int size)
{
	sort_array(ptr, size);
	return ptr[0];
}

void print_statistics(float mean, float median, unsigned char min, unsigned char max)
{
	printf("The mean is %.2f\n", mean);
	printf("The median is %.2f\n", median);
	printf("The minimum is %u\n", min);
	printf("The maximum is %u\n", max);
}