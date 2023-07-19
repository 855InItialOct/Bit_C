#include <stdio.h>
int main()
{
	int a = 10;
	int* p = &a;//int* 整体是一个类型：整型指针类型。int说明的该指针指向的对象类型，*表示该变量是指针变量，p是创建出来存放地址的变量，&取地址操作符。
	int c = *p;//*是解引用操作符，通过地址找到内存空间。

	return 0;
}