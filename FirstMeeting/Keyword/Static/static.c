#include<stdio.h>

void test()
{
	int a = 3;//局部变量存放在内存中的栈区，出作用域自动销毁。
	a++;
	printf("%d ", a);
}

void test2()
{
	static int a = 3;//static修饰的局部变量存放在内存中的静态区，出了作用域不会销毁，生命周期从定义开始到程序结束。
	a++;
	printf("%d ", a);
}

int main()
{
	int i = 0;
	while (i < 10)
	{
		//test();
		test2();
		i++;
	}

	return 0;
}