#include <stdio.h>

int main()
{
	int a = 7 % 2;
	//m%n 余数的值必定在0~n-1。
	printf("%d\n", a);

	return 0;
}