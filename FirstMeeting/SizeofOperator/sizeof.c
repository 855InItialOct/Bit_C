#include <stdio.h>

int main()
{
	int a = 10;
	char c = 'w';
	int arr[10] = { 0 };
	printf("%d\n",sizeof(a));
	printf("%d\n",sizeof(c));
	printf("%d\n",sizeof(arr));//操作数的类型长度（以字节为单位）
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof a);//sizeof是一个操作符，不是函数
	printf("%d\n", sizeof c);
	//printf("%d\n", sizeof int);

	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);

	return 0;
}