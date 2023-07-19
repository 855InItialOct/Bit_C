#include <stdio.h>

int main()
{
	int a = 10;
	printf("a = %d\n", a);
	int b = ++a;//前置++，先++，后使用。
	printf("Now,a = %d\n", a);
	printf("b = %d\n", b);

	int c = 10;
	printf("c = %d\n", c);
	int d = c--;//后置++，先使用，后自增。
	printf("Now,c = %d\n", c);
	printf("d = %d\n", d);

	return 0;
}