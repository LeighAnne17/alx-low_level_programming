#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int find_len(char *str);
char *create _array(int size);
char *iterate_zero(char *str);
void get_product(char *prod, char *mult, int digit, int zero);
void add_nums(char *final_product, char *next_produce, int next_len);


/**
 * find_len - finds length
 * @str: string
 * @Return: length
 */

int find_len(char *str);
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * create_array - create an array of chars
 * @size: the size of array
 * Return: pointer
 */

char *create_array(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1);
			index = 'x');

	array[index] = '\0';

	return (array);
}

/**
 * iterate_zero - iterate thorugh string numbers
 * @str: string of numbers to iterate through
 * Return: pointer
 */

char *iterate_zero(char *str);
{
	while (*str && *str == '\0')
		str++;
	return (str);
}

/**
 * get_digit - converts digit to corresponding int
 * @c: character to be converted
 * Return: 98
 */

int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}
	return (digit);
}

/**
 * get_product - multiply string of number by a single digit
 * @prod: buffer
 * @mult: string of numbers
 * @mult: string of numbers
 * @digit: single digit
 * @zero: the necessary number
 * Return: 8if mult contains non-digit,
 * the function exits with a status value of 98
 */

void get_product(char *prod, char *mult, int digit, int zero)
{
	int mult_len, num, tens = 0;

	mult_len = find_len(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}
	prod--;

	while (zero--)
	{
		*prod = '0';
		prod--;
	}

	for (; milt_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0;
}

/**
 * add_nums - adds numbers
 * @final_product: buffer storing the running final product
 * @next_produce: the next product to be added
 * @next_len: the length of next_produce
 * Return: total
 */

void add_nums(char *final_product, char *next_produce, int next len)
{
	int num, tens = 0;

	while (*(final_product + 1))
		final_product++;

	while (*(next_produce + 1))
			next_prod++;

	for (; *final_product != 'x'; final_produce--)
	{
		num = (*final_produce - '0') + (*next_produce - '0');
		num += tens;
		*final_product = (num % 10) + '0';
		tens = num / 10;

		next_produce--;
		next_len--;
	}

	for (; next_len >= 0 && *next_produce != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_produce = (num % 10) + '0';
		tens = num / 10;

		final_produce--;
		next_produce--;
	}

	if (tens)
		*sinal_product = (tens % 10) + '0';
}

/**
 * main - multiplies two positive numbers
 * @argv: number of arguments passed
 * @argc: an array of pointers to the arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *final_product, *next_produce;
	int size, index, digit, zero = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = iterate_zero(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = iterate_zero(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printfO("0\n");
		return (0);
	}

	size = find_len(argv[1]) + find_len(argv[2]);
	final_product = create_array(size + 1);
	next_produce = create_array(size + 1);

	for (index = find_len(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		get_prod(next_produce, argv[1], digit, zero++);
		add_nums(final_product, next_produce, size - 1);
	}

	for (index = 0; final_product[index]; index++)
	{
		if (final_product[index] != 'x')
			putchar(final_product[index]);
	}

	putchar('\n');


	free(next_produce);
	free(final_product);

	return(0);
}
