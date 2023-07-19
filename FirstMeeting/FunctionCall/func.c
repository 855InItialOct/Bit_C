#include<stdio.h>

int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int c = Add(2, 3);//()是函数调用操作符，Add、2/3是操作数。
	printf("%d\n", c);

	return 0;
}