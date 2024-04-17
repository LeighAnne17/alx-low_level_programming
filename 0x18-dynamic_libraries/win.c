#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>

typedef void (*original_function_type)(int, int, int, int, int, int);

void gm(int n1, int n2, int n3, int n4, int n5, int bonus)
{
    int winning_numbers[] = {9, 8, 10, 24, 75, 9};

    printf("--> Please make me win!\n");

    ((original_function_type)dlsym(RTLD_NEXT, "gm"))(winning_numbers[0], winning_numbers[1], winning_numbers[2], winning_numbers[3], winning_numbers[4], winning_numbers[5]);
}
