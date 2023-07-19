#include <stdio.h>

int main()
{
	int a = 7 / 2;
	printf("%d\n", a);

	//除号两端的操作数如果是整数，执行的是整数除法；如果至少有一端是浮点数，执行的是浮点数除法。
	float f = 7.0 / 2;
	printf("%f\n", f);

	return 0;
}