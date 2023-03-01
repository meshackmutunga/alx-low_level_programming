<<<<<<< HEAD
#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
=======
#include <stdio.h>
#include "holberton.h"
/**
 * _strcat - function that print a string overwriting a string
 * @src: int
 * @dest: int
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int aux;

	for (i = 0, j = n - 1; i < n / 2; j--, i++)
	{
		aux = a[i];
		a[i] = a[j];
		a[j] = aux;
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
	}
}
