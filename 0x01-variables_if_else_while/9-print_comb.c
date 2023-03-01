#include <stdio.h>
<<<<<<< HEAD

/**
* main - Lanzador assignment.
*
* Return: Always 0.
*/

int main(void)
{
	int a = '0';


	while (a <= '9')
	{
		putchar(a);
		if (a == '9')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
			a++;
		}
	}
	return (0);
=======
/**
* main - Entry point
* Return: 0.
*/
int main(void)
{
int num;
for (num = 48; num <= 57; num++)
{
putchar(num);
if (num != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
