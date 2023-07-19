#include <stdio.h>

int main()
{
	int a = 1;
	int b = 2;
	int c = 3;
	//存放一组相同类型的数据

	//初始化
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	//不完全初始化
	char ch[] = { 0 };
	char ch2[] = { 'a','b','c' };
	char ch3[] = { 0 };

	// \0的ASCII值为0
	char c1 = 0;//c里面存放的是\0

	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d\n", arr2[8]);
	//printf("%d\n", arr2[18]);//越界访问

	return 0;
}