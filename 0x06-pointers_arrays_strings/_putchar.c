#include "main.h"
#include "unistd.h"

/**
 * _putchar - state the character c to stdout
 * @c: character to print
 *
 * Return: success 1.
 * On error, -1 is returned and error will be set
 */

int _putchar(char c)

{
	return (write(1, &c, 1));

}
