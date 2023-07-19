#define ADD(x,y) ((x)+(y))
#define MAX(x,y) ((x>y)?x:y)

#include <stdio.h>

int main()
{
	int a = 10;
	int b = 10;
	int c = ADD(a, b);
	int d = MAX(a, b);
	printf("%d\n", c);
	printf("%d\n", d);

	return 0;
}