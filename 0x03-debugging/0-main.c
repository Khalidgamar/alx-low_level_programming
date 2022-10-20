#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Test function for positive or negative
 *
 * Return: 0
 */
int main(void)
{
positive_or_negative(int i)
int n;
i = 0;
n = i % 2;
if (n > 0)
printf("%d is positive\n", n);
else if (n == 0)
printf("%d is zero\n", n);
else
printf("%d is negative\n", n);
return (0);
}
