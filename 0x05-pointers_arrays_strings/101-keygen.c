#include <stdio.h>
<<<<<<< HEAD
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int i, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

=======
#include <time.h>
#include <stdlib.h>
/**
 * main - random  numbers
 *
 * Return: 0 Always
*/

int main(void)
{
	int i;
	int j = 0;
	int randnum;
	char p[100];

	srand(time(NULL));
	for (i = 0; i < 100; i++)
	{
		randnum = random() % 127;
		if (randnum > 32)
		{
			p[j] = randnum;
			j++;
		}
	}
	p[j] = '\0';
	printf("%s", p);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
	return (0);
}
