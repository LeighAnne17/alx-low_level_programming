#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary number
 * Return: converted number
 */

unsigned int binary_to_uint(const char *b) {
    if (b == NULL)
        return 0;

    unsigned int answer = 0;
    unsigned int base = 1;
    int length = 0;

    // Calculate the length of the string
    while (b[length] != '\0')
        length+

    for (int x = length - 1; x >= 0; x--) {
        if (b[x] != '0' && b[x] != '1')
            return (0);

        if (b[x] == '1')
            answer += base;

        base *= 2;
    }

    return answer;
}

