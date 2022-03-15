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
 * @file stats.h 
 * @brief Header file with all function prototypes
 *
 * Describes the function that will be used for the stats.c implementation
 *
 * @author Aniket Sedhai
 * @date 03/13/2022
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief A function that prints the statistics related to a set of data
 *
 * This function takes values of each statistics as a parameter in the following order:
 * minimum, maximum, mean, and median and prints them in complete sentences
 *
 * @param min The value you want to print as the minimum
 * @param max The value you want to print as the maximum
 * @param mean The value you want to print as the mean
 * @param med The value you want to print as the median
 *
 * @return Returns nothing after a successful printing of the statistics using printf.
 */
void print_statistics(float mean, float median, unsigned char min, unsigned char max);

/**
 * @brief A function that prints the whole array
 * 
 * This function takes array of data and a length, prints the array to the screen
 * @param ptr takes a pointer to the array
 * @param size takes the number of elements in the array
 * 
 * @return Returns 0 after printing the array
 */
void print_array(unsigned char *ptr, unsigned int size);

/**
 * @brief A function that finds the median
 *
 * This function takes array of data and a length, finds the median from the given data
 * @param ptr takes a pointer to the array
 * @param size takes the number of elements in the array
 *
 * @return Returns the median
 */
float find_median(unsigned char *ptr, unsigned int size);

/**
 * @brief A function that calculates the mean
 *
 * This function takes array of data and a length, calculates the mean from the given data
 * @param ptr takes a pointer to the array
 * @param size takes the number of elements in the array 
 *
 * @return Returns the mean
 */
float find_mean(unsigned char *ptr, unsigned int size);

/**
 * @brief A function that finds the maximum value in the given data
 *
 * This function takes array of data and a length, finds the maximum from the given data
 * @param ptr takes a pointer to the array
 * @param size takes the number of elements in the array
 *
 * @return Returns the maximum value
 */
unsigned char find_maximum(unsigned char *ptr, unsigned int size);

/**
 * @brief A function that finds the minimum
 *
 * This function takes array of data and a length, finds the minimum from the given data
 * @param ptr takes a pointer to the array
 * @param size takes the number of elements in the array
 *
 * @return Returns the minimum
 */
unsigned char find_minimum(unsigned char *ptr, unsigned int size);

/**
 * @brief A function that sorts the array
 *
 * This function takes array of data and a length, finds the minimum from the given data
 * @param ptr takes a pointer to the array
 * @param size takes the number of elements in the array
 *
 * @returns nothing
 */

void sort_array(unsigned char *ptr, unsigned int size);

#endif /* __STATS_H__ */
