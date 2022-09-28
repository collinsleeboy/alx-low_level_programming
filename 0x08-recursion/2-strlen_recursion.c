#include "main.h"

/**
* _strlen_recursion - Returns Length of String
* @s: string
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _strlen_recursion(char *s)
{
  int sun = 0;
if (*s != '\0')
{
sum++;
sum += _strlen_recursion(s +1);
}
return (sum);
}
