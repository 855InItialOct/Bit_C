#include <stdio.h>

int main()
{
	char arr[] = "abcdef";
	char arr_1[] = { 'a','b','c','d','e','f' };//无结束标志\0,\0的AScII值是0
	printf("%s\n", arr);
	printf("%s\n", arr_1);//%s要找到结束标志才结束。

	return 0;
}