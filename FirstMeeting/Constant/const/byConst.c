#include <stdio.h>

int main()
{
	//int num = 100;
	//num = 200;
	//printf("num = %d\n", num);
    /* const修饰的常变量在C语言中只是在语法层面限制了,变量不能直接被改变，但是本质上还是一个变量的，所以叫常变量。*/
	const int num = 100;
	//num = 200;
	printf("num = %d\n", num);

	return 0;
}