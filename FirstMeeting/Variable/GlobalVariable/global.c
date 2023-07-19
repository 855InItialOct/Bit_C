#include <stdio.h>

int a = 1000;

extern int a;

void test()
{
	printf("3.a = %d\n", a);
}

int main()
{
	printf("1.a = %d\n", a);

	{
		printf("2.a = %d\n", a);
	}

	test();

	return 0;
}