#include <stdio.h>

int main()
{
	int a = 10;
	int b = 0;
	if (a > 5)
		b = -3;
	else
		b = 3;
	printf("a = %d,b = %d\n", a, b);
	(a > 5) ? (b = -3) : (b = 3);
	printf("a = %d,b = %d\n", a, b);
	b = (a > 5 ? -3 : 3);
	printf("a = %d,b = %d\n", a, b);

	return 0;
}