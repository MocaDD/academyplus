#Changing file

#include <stdio.h>

int		main(void)
{
	float a, b, c, rez;

	a = 4.0;
	b = 5.0;
	c = 2.0;

	rez = (1 / (a + 1) / (b + 1) / c);
	printf("%f", rez);
	return (0);
}
