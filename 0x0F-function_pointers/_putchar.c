#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

int _putchar(char c)
{
	return (write(1, &c, 1));
}
