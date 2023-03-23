#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

int _putcha(char c)
{
	return (write(1, &c, 1));
}
