<<<<<<< HEAD
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
=======
#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
<<<<<<< HEAD
	int i;

	i = 0;
	while (i < n)
	{
	if (i != 0)
	{
		printf(", ");
	}
	printf("%d", a[i]);
	i++;
	}
	printf("\n");
}

/**
 * main - check the code
=======
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for Holberton School students.
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
 *
 * Return: Always 0.
 */
int main(void)
{
<<<<<<< HEAD
	int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

	print_array(a, sizeof(a) / sizeof(int));
		reverse_array(a, sizeof(a) / sizeof(int));
	print_array(a, sizeof(a) / sizeof(int));
	return (0);
=======
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
