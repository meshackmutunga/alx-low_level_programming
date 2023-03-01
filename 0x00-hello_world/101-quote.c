<<<<<<< HEAD
#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly "and that piece of art is useful"
 * - Dora Korpar, 2015-10-19",
 * followed by a new line, to the standard error.
=======
#include <unistd.h>
/**
 * main - Entry point
 *
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
 * Return: Always 1 (Success)
 */
int main(void)
{
<<<<<<< HEAD
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
=======
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
	return (1);
}
