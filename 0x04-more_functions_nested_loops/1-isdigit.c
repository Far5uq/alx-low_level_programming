#include "main.h"

/**
 * _isdigit - checks for digigts
 * @c: parameters to be checked
 * Return: 1 on success 0 on failure
 */

int _isdigit(int c)
{
if (c <= 57 && c >= 48)
return (1);
else
return (0);
}
