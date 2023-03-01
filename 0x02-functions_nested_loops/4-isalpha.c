<<<<<<< HEAD
#include "main.h"

/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to be checked.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
=======
#include "holberton.h"
/**
* _isalpha - Shows 1 if the input is a
* letter Another cases, shows 0
*
* @c: The character in ASCII code
*
* Return: 1 for letters. 0 for the rest.
*/
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
>>>>>>> c83b3a9fb0c0fbeaa8f53045714e20a77e6a3868
}
