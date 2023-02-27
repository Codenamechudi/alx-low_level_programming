#include "main.h"
/**
 ** swap_int - exchanges the value of int b with int a
 ** @a: integer meant to be exchanged
 ** @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;

	*a = *b;

	*b = m;
}
