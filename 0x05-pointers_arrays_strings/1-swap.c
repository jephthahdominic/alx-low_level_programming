#include "main.h"
/**
 * @a: first pointer
 * @b: second pointer
 *
 * return: (0)
 */

void swap_int(int *a, int *b)
{
int empty;
int *c = &empty;
*c = *a;
*a = *b;
*b = *c;
}
