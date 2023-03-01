#include <stdio.h>

/**
<<<<<<< HEAD
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;
/*
*	while (i < 10)
*	{
*		putchar(i);
*	}
*/
	printf("Infinite loop avoided! \\o/\n");

	return (0);
=======
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
int i;

printf("Infinite loop incoming :(\n");

i = 0;

while (i < 10)
{
i++;	/* putchar(i);*/
}

printf("Infinite loop avoided! \\o/\n");

return (0);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
