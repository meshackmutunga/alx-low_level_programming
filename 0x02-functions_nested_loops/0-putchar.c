<<<<<<< HEAD
#include "main.h"
#include <unistd.h>

/**
 * 0-putchar - writes the character c to stdout
 * @c: The character to print herre
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
=======
#include "holberton.h"

/**
* main - Entry point
*
* Description: Prints Holberton, followed by a new line
* Return: 0
 */

int main(void)
{
	char holberton[] = "Holberton";
	int msg;
	for (msg = 0; msg <= 8; msg++)
	{
		_putchar(holberton[msg]);
	}
	_putchar('\n');
	return (0);
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
