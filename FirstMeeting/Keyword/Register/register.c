#include<stdio.h>

int main()
{
	register int a = 10;//register关键字只是建议存放寄存器中，具体看编译器。
	printf("%d\n", a);

	return 0;
}