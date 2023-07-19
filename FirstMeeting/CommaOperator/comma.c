#include <stdio.h>

int main()
{
	int a = 3;
	int b = 5;
	int c = 0;
	int d = (a += 2, b = b - c + a, c = a + b);
	printf("a = %d,b = %d,c = %d,d = %d\n", a, b, c, d);

	return 0;
}